/**
 * Test sinewave neural network model
 * 
 * Author: Pete Warden
 * Modified by: Shawn Hymel
 * Date: March 11, 2020
 * 
 * Modified by: Alex Sloot, Brendan Dijkstra
 * Date: July 13, 2023
 *
 * Copyright 2019 The TensorFlow Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Import TensorFlow
#include "TensorFlowLite.h"
#include "tensorflow/lite/micro/kernels/micro_ops.h"
#include "tensorflow/lite/micro/micro_error_reporter.h"
#include "tensorflow/lite/micro/micro_interpreter.h"
#include "tensorflow/lite/micro/micro_mutable_op_resolver.h"
#include "tensorflow/lite/version.h"

// Our model hello world sin model
#include "sine_model.h"

// Choose to spam the console (0 or 1)
#define DEBUG_PRINT 0

// Global variable settings
constexpr float pi = 3.1415926535897932384626433; // Enjoy some pi or assume pi=e=3
constexpr float freq = 0.5;                       // Frequency (Hz) of sinewave
constexpr float period = (1 / freq) * (1000000);  // Period (microseconds)

// TFLite globals, used for compatibility with Arduino-style sketches
namespace {
  tflite::ErrorReporter* error_reporter = nullptr;
  const tflite::Model* model = nullptr;
  tflite::MicroInterpreter* interpreter = nullptr;
  TfLiteTensor* model_input = nullptr;
  TfLiteTensor* model_output = nullptr;

  // Create an area of memory to use for input, output, and other TensorFlow arrays.
  constexpr int kTensorArenaSize = 5 * 1024;
  uint8_t tensor_arena[kTensorArenaSize];
}

void setup() {

  // Wait for Serial to connect if we want to print the output
  #if DEBUG_PRINT
    while(!Serial);
  #endif

  // Set up logging (will report to Serial, even within TFLite functions)
  static tflite::MicroErrorReporter micro_error_reporter;
  error_reporter = &micro_error_reporter;

  // Map the model into a usable data structure
  model = tflite::GetModel(sine_model);
  if (model->version() != TFLITE_SCHEMA_VERSION) {
    error_reporter->Report("Model version does not match Schema");
    while(1);
  }

  // Pull in only needed operations (should match NN layers)
  static tflite::MicroMutableOpResolver<8> micro_mutable_op_resolver;
  micro_mutable_op_resolver.AddFullyConnected();

  // Build an interpreter to run the model
  static tflite::MicroInterpreter static_interpreter(
    model, micro_mutable_op_resolver, tensor_arena, kTensorArenaSize, error_reporter);
  interpreter = &static_interpreter;

  // Allocate memory from the tensor_arena for the model's tensors
  TfLiteStatus allocate_status = interpreter->AllocateTensors();
  if (allocate_status != kTfLiteOk) {
    error_reporter->Report("AllocateTensors() failed");
    while(1) {
      //wait until arduino is reset.
    }
  }

  // Assign model input and output buffers (tensors) to pointers
  model_input = interpreter->input(0);
  model_output = interpreter->output(0);

  // Initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

  // Print info
  #if DEBUG_PRINT
    Serial.print("Number of dimensions: ");
    Serial.println(model_input->dims->size);
    Serial.print("Dim 1 size: ");
    Serial.println(model_input->dims->data[0]);
    Serial.print("Dim 2 size: ");
    Serial.println(model_input->dims->data[1]);
    Serial.print("Input type: ");
    Serial.println(model_input->type);
  #endif
}

void loop() {

  #if DEBUG_PRINT
    unsigned long start_timestamp = micros();
  #endif

  // Get current time since last completed period
  unsigned long timestamp = micros();
  timestamp = timestamp % (unsigned long)period;

  // Calculate x value to feed to the model
  // x goes from 0 to 2 pi based on the time and period duration
  float x_val = (((float)timestamp / period) * 2 * pi) ;

  // Copy value to input buffer (tensor)
  model_input->data.f[0] = x_val;

  // Run inference
  TfLiteStatus invoke_status = interpreter->Invoke();
  if (invoke_status != kTfLiteOk) {
    error_reporter->Report("Invoke failed on input: %f\n", x_val);
  }

  // Read predicted y value from output buffer (tensor)
  // sin wave will result between -1 and 1
  float y_val = model_output->data.f[0];

  // Translate y range [-1, 1] to [0, 1] 
  // Multiply with 255 to get brightness range of [0, 255]
  int brightness = (int)(255 * ((y_val + 1) / 2));
  analogWrite(LED_BUILTIN, brightness);

  // Print value and print additional boundary values for nicer plot
  Serial.print(-1.5);
  Serial.print("\t");
  Serial.print(1.5);
  Serial.print("\t");
  Serial.println(y_val);

  #if DEBUG_PRINT
    Serial.print("Time for inference (us): ");
    Serial.println(micros() - start_timestamp);
  #endif
}
