
//Edge Impulse Project https://studio.edgeimpulse.com/public/749050/latest

#include <Wire.h>
#include <SoundSensor_inferencing.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>


#define MIC_PIN A2
#define SAMPLE_RATE 16000         // 16kHz
#define SAMPLE_DURATION_MS 2000   // 2 seconds
#define TOTAL_SAMPLES (SAMPLE_RATE * SAMPLE_DURATION_MS / 1000)

#define OLED_RESET   -1            // Not used on 0.93″ module
#define OLED_I2C_ADDR 0x3C

// OLED object on I²C (SDA=A4, SCL=A5)
Adafruit_SSD1306 oled(128, 64, &Wire, OLED_RESET);

bool debug_nn = true;  // Set this to true for detailed debug info

void setup() {
  Serial.begin(115200);
  while (!Serial);  // Wait for USB connection

  if (!oled.begin(SSD1306_SWITCHCAPVCC, OLED_I2C_ADDR)) {
    // OLED init failed → halt
    while (1);
  }
  oled.clearDisplay();
  oled.setTextSize(2);      // Normal 1:1 pixel scale
  oled.setTextColor(SSD1306_WHITE); // Draw white text  

  Serial.println("Edge Impulse Inference - Sound Detection");
  pinMode(MIC_PIN, INPUT);

  if (EI_CLASSIFIER_RAW_SAMPLES_PER_FRAME != 1) {
    Serial.println("ERR: Model requires 1 sensor audio!");

    while (1)
      ;
  }
}


void updateStatusInOLED(String status){
       // Clear only the top half (line 1: y=0…15)
      oled.fillRect(0, 45, 128, 16, BLACK);
      oled.setTextSize(2);       
      oled.setCursor(0, 45);
      oled.print(status);
      oled.display();
}


void classification(String label, String value){
      oled.clearDisplay();
      //oled.fillRect(0, 0, 128, 16, BLACK);
      oled.setTextSize(2);       
      oled.setCursor(0, 5);
      oled.println(label);
      oled.setCursor(0, 25); 
      oled.print("  ");     
      oled.print(value);
      oled.display();
}

int readSample(){
  long sum = 0;
  const int samples = 32;
  for (int i = 0; i < samples; i++) {
      sum += analogRead(MIC_PIN);
      delay(1); // optional: small delay
  }
  int micValue = sum / samples;
return micValue;
}

void loop() {
  Serial.println("\nStarting inferencing in 2 seconds...");
  delay(2000);
  Serial.println("Sampling...");
  updateStatusInOLED("Sample...");
  float buffer[EI_CLASSIFIER_DSP_INPUT_FRAME_SIZE] = { 0 };

  // Collect accelerometer data
  for (size_t ix = 0; ix < EI_CLASSIFIER_DSP_INPUT_FRAME_SIZE; ix ++) {
    buffer[ix] = readSample(); 
    //Serial.print(buffer[ix]);
    //Serial.print(" ");
  }
    //Serial.println("\n");

   Serial.println("Converting to Signal...");
  // Convert raw accelerometer data to a signal object
  signal_t signal;
  int err = numpy::signal_from_buffer(buffer, EI_CLASSIFIER_DSP_INPUT_FRAME_SIZE, &signal);
  if (err != 0) {
    Serial.println("Failed to create signal from buffer");
    return;
  }

  Serial.println("Inferencing...");
  updateStatusInOLED("Infer...");
  // Run the classifier to detect movement patterns
  ei_impulse_result_t result = { 0 };
  err = run_classifier(&signal, &result, debug_nn);
  if (err != EI_IMPULSE_OK) {
    Serial.println("ERR: Failed to run classifier");
    return;
  }
  // Assume run_classifier called and result populated
  for (size_t ix = 0; ix < EI_CLASSIFIER_LABEL_COUNT; ix++) {
      Serial.print(result.classification[ix].label);
      Serial.print(": ");
      Serial.println(result.classification[ix].value, 5);
      if(result.classification[ix].value>0.8){
        classification(result.classification[ix].label, String(result.classification[ix].value,5));
      }
  }
  #if EI_CLASSIFIER_HAS_ANOMALY == 1
  Serial.print("anomaly: ");
  Serial.println(result.anomaly, 3);
  #endif
  Serial.print("Timing (DSP: ");
  Serial.print(result.timing.dsp);
  Serial.print(" ms, Classification: ");
  Serial.print(result.timing.classification);
  Serial.print(" ms, Anomaly: ");
  Serial.print(result.timing.anomaly);
  Serial.println(" ms)");

}