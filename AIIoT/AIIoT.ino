#include <Wire.h>
#include <Adafruit_ADXL345_U.h>  // Library for ADXL345
#include <movement_model.h>      // Include your Edge Impulse Arduino library
#define CONVERT_G_TO_MS2 9.80665f
#define MAX_ACCEPTED_RANGE 2.0f

Adafruit_ADXL345_Unified accel = Adafruit_ADXL345_Unified(12345);
bool debug_nn = false;  // Set this to true for detailed debug info

void setup() {
  Serial.begin(115200);
  while (!Serial)
    ;  // Wait for USB connection
  Serial.println("Edge Impulse Inference - Movement Detection");
  // Initialize the ADXL345 sensor
  if (!accel.begin()) {
    Serial.println("Failed to initialize ADXL345! Check wiring.");
    while (1)
      ;
  }
  Serial.println("ADXL345 initialized.");
  // Ensure the model expects 3-axis accelerometer data
  if (EI_CLASSIFIER_RAW_SAMPLES_PER_FRAME != 3) {
    Serial.println("ERR: Model requires 3 sensor axes!");

    while (1)
      ;
  }
}

float get_sign(float number) {
  return (number >= 0.0) ? 1.0 : -1.0;
}

void loop() {
  Serial.println("\nStarting inferencing in 2 seconds...");
  delay(2000);
  Serial.println("Sampling...");
  float buffer[EI_CLASSIFIER_DSP_INPUT_FRAME_SIZE] = { 0 };
  // Collect accelerometer data
  for (size_t ix = 0; ix < EI_CLASSIFIER_DSP_INPUT_FRAME_SIZE; ix += 3) {
    sensors_event_t event;
    accel.getEvent(&event);
    buffer[ix] = event.acceleration.x;
    buffer[ix + 1] = event.acceleration.y;
    buffer[ix + 2] = event.acceleration.z;
  }
  // Convert raw accelerometer data to a signal object
  signal_t signal;
  int err = numpy::signal_from_buffer(buffer, EI_CLASSIFIER_DSP_INPUT_FRAME_SIZE, &signal);
  if (err != 0) {
    Serial.println("Failed to create signal from buffer");
    return;
  }
  // Run the classifier to detect movement patterns
  ei_impulse_result_t result = { 0 };
  err = run_classifier(&signal, &result, debug_nn);
  if (err != EI_IMPULSE_OK) {
    Serial.println("ERR: Failed to run classifier");
    return;
  }
}