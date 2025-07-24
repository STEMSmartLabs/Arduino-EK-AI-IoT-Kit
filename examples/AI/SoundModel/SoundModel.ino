#include <Wire.h>
#include <SoundSensor_inferencing.h>

#define MIC_PIN A2
#define SAMPLE_RATE 16000         // 16kHz
#define SAMPLE_DURATION_MS 2000   // 2 seconds
#define TOTAL_SAMPLES (SAMPLE_RATE * SAMPLE_DURATION_MS / 1000)

bool debug_nn = true;  // Set this to true for detailed debug info

void setup() {
  Serial.begin(115200);
  while (!Serial)
    ;  // Wait for USB connection
  Serial.println("Edge Impulse Inference - Sound Detection");
  pinMode(MIC_PIN, INPUT);

  if (EI_CLASSIFIER_RAW_SAMPLES_PER_FRAME != 1) {
    Serial.println("ERR: Model requires 1 sensor audio!");

    while (1)
      ;
  }
}


void loop() {
  Serial.println("\nStarting inferencing in 2 seconds...");
  delay(2000);
  Serial.println("Sampling...");
  float buffer[EI_CLASSIFIER_DSP_INPUT_FRAME_SIZE] = { 0 };

  // Collect accelerometer data
  for (size_t ix = 0; ix < EI_CLASSIFIER_DSP_INPUT_FRAME_SIZE; ix ++) {
    buffer[ix] = analogRead(MIC_PIN); 
  }

   Serial.println("Converting to Signal...");
  // Convert raw accelerometer data to a signal object
  signal_t signal;
  int err = numpy::signal_from_buffer(buffer, EI_CLASSIFIER_DSP_INPUT_FRAME_SIZE, &signal);
  if (err != 0) {
    Serial.println("Failed to create signal from buffer");
    return;
  }

  Serial.println("Inferencing...");
  // Run the classifier to detect movement patterns
  ei_impulse_result_t result = { 0 };
  err = run_classifier(&signal, &result, debug_nn);
  if (err != EI_IMPULSE_OK) {
    Serial.println("ERR: Failed to run classifier");
    return;
  }
}