/*
 * Original Authors: Harvard University tinyMLx
 * Modified by: Alex Sloot, Brendan Dijkstra, RUG
 * Date: July 13 2023
 */

#include <TinyMLShield.h>

bool commandRecv = false; // flag used for indicating receipt of commands from serial port
bool liveFlag = false;    // flag as true to live stream raw camera bytes, set as false to take single images on command
bool captureFlag = false; // flag used to capture the enemy flag

// Image buffer;
byte image[176 * 144 * 2]; // QCIF: 176x144 x 2 bytes per pixel (RGB565)
int bytesPerFrame;

void setup() {
  Serial.begin(9600);
  while (!Serial);

  initializeShield();

  // Initialize the OV7675 camera
  if (!Camera.begin(QCIF, RGB565, 1, OV7675)) {
    Serial.println("Failed to initialize camera");
    while (1);
  }
  bytesPerFrame = Camera.width() * Camera.height() * Camera.bytesPerPixel();

  Serial.println("Available commands:\n");
  Serial.println("single - take a single image and print out the hexadecimal for each pixel (default)");
  Serial.println("live - the raw bytes of images will be streamed live over the serial port");
  Serial.println("capture - when in single mode, initiates an image capture");
}

void loop() {
  int i = 0;
  String command;

  bool clicked = readShieldButton();
  if (clicked && !liveFlag && !captureFlag) {
    captureFlag = true;
  }


  // Read incoming commands from serial monitor
  while (Serial.available()) {
    char c = Serial.read();
    if ((c != '\n') && (c != '\r')) {
      command.concat(c);
    } 
    else if (c == '\r') {
      commandRecv = true;
      command.toLowerCase();
    }
  }

  // Command interpretation
  if (commandRecv) {
    commandRecv = false;
    if (command == "live") {
      Serial.println("\nRaw image data will begin streaming in 5 seconds...");
      liveFlag = true;
      delay(5000);
    } else if (command == "single") {
      Serial.println("\nCamera in single mode, type \"capture\" to initiate an image capture");
      liveFlag = false;
      delay(200);
    } else if (command == "capture") {
      if (!liveFlag) {
        if (!captureFlag) {
          captureFlag = true;
        }
        delay(200);
      }
      else {
        Serial.println("\nCamera is not in single mode, type \"single\" first");
        delay(1000);
      }
    } else if (command == "debug"){
      Camera.readFrame(image);
      while(1){
        Serial.write(image, bytesPerFrame);
        Serial.println(' ');
        delay(1000);
      }
    }
  }
  if (liveFlag) {
    Camera.readFrame(image);
    Serial.write(image, bytesPerFrame);
    delay(500);
  }
  else {
    if (captureFlag) {
      captureFlag = false;
      Serial.println("\nImage will be taken in 3 seconds...");
      delay(3000);
      Camera.readFrame(image);
      for (int i = 0; i < bytesPerFrame - 1; i += 2) {
        Serial.print("0x");
        Serial.print(image[i+1], HEX);
        Serial.print(image[i], HEX);
        if (i != bytesPerFrame - 2) {
          Serial.print(", ");
        }
      }
      Serial.println();
    }
  }
}