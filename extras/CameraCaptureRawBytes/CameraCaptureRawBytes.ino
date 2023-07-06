/*
  OV767X - Camera Capture Raw Bytes

  This sketch reads a frame from the OmniVision OV7675 camera
  and writes the bytes to the Serial port. Use the Processing
  sketch in the extras folder to visualize the camera output.

  This example code is in the public domain.
*/

#include <TinyMLShield.h>
#include "OV767X_TinyMLx.h"

int bytesPerFrame;

// Define the desired resolution
// STILL NEED TO CHANGE 1 PIECE BELOW AS WELL
String resolution = "QCIF"; // Choose from VGA, CIF, QVGA, QCIF, or QQVGA

void setup() {
  int cameraWidth, cameraHeight;
  if (resolution.equals("VGA")) {
    cameraWidth = 640;
    cameraHeight = 480;
  } else if (resolution.equals("CIF")) {
    cameraWidth = 352;
    cameraHeight = 240;
  } else if (resolution.equals("QVGA")) {
    cameraWidth = 320;
    cameraHeight = 240;
  } else if (resolution.equals("QCIF")) {
    cameraWidth = 176;
    cameraHeight = 144;
  } else if (resolution.equals("QQVGA")) {
    cameraWidth = 160;
    cameraHeight = 120;
  } else {
    // Default to QVGA if an invalid resolution is provided
    cameraWidth = 320;
    cameraHeight = 240;
  }

  byte data[cameraWidth * cameraHeight * 2]; // Default to QVGA: 320x240 X 2 bytes per pixel (RGB565)

  Serial.begin(9600);
  while (!Serial);

  //THIS ALSO NEEDS TO BE CHANGED
  if (!Camera.begin(QCIF, RGB565, 1, OV7675)) {
    Serial.println("Failed to initialize camera!");
    while (1);
  }

  bytesPerFrame = cameraWidth * cameraHeight * Camera.bytesPerPixel();

  // Optionally, enable the test pattern for testing
  // Camera.testPattern();
}

void loop() {
  byte data[bytesPerFrame];
  Camera.readFrame(data);

  Serial.write(data, bytesPerFrame);
}
