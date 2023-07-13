/*
 * Original Authors: Harvard University tinyMLx
 * Modified by: Alex Sloot, Brendan Dijkstra, RUG
 * Date: July 13 2023
 */

#include <PDM.h>              //Pulse Density Modulation (PDM)
#include <TinyMLShield.h>

// PDM buffer is an analog to digital converter.
short sampleBuffer[256];
volatile int samplesRead;

bool record = false;          // flag used to start recording
bool commandRecv = false;     // flag that checks for the recording command recieved

// Function to read the PDM microphone data
void onPDMdata() {
  // query the number of bytes available
  int bytesAvailable = PDM.available();

  // read data into the sample buffer
  PDM.read(sampleBuffer, bytesAvailable);

  samplesRead = bytesAvailable / 2;
}

void setup() {
  Serial.begin(9600);
  while (!Serial);  

  // Initialize the TinyML Shield to activate the button
  initializeShield();

  PDM.onReceive(onPDMdata);
  // Initialize PDM microphone in mono mode with 16 kHz sample rate
  if (!PDM.begin(1, 16000)) {
    Serial.println("Failed to start PDM");
    while (1);
  }

  Serial.println("Use the on-shield button or send the command 'click' to start and stop an audio recording");
}

void loop() {
  // see if the button is pressed and turn off or on recording accordingly
  bool clicked = readShieldButton();
  if (clicked){
    record = !record;
  }
  
  // see if a command was sent over the serial monitor and record it if so
  String command;
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

  // parse the command if applicable
  if (commandRecv && command == "click") {
    commandRecv = false;
    record = !record;
  }

  // display the audio if applicable
  if (samplesRead) {
    // print samples to serial plotter
    if (record) {
      for (int i = 0; i < samplesRead; i++) {
        Serial.print(1500);
        Serial.print(' ');
        Serial.print(-1500);
        Serial.print(' ');
        Serial.println(sampleBuffer[i]);
      }
    }
    // clear read count
    samplesRead = 0;
  } 
}


