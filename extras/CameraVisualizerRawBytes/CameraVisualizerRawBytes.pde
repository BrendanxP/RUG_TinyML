/*
  This sketch reads a raw Stream of RGB565 pixels
  from the Serial port and displays the frame on
  the window.

  Use with the Examples -> CameraCaptureRawBytes Arduino sketch.

  This example code is in the public domain.
*/

import processing.serial.*;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;

Serial myPort;

// Define the desired resolution and serial connection
final String resolution = "QCIF";  // Choose from VGA, CIF, QVGA, QCIF, or QQVGA
final String com_port = ""; // Leave blank if only one serial COM port is active, otherwise specify "COM4"

int cameraWidth;
int cameraHeight;

final int cameraBytesPerPixel = 2;

int bytesPerFrame;

PImage myImage;

void setup()
{
  size(640,480); // Need to make window first, resize later
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

  windowResize(cameraWidth, cameraHeight);


  if (com_port.equals("")) {
    // Pick the only/first serial COM port active.
    myPort = new Serial(this, Serial.list()[0], 9600);
  } else {
    // Specify the serial COM port.
    myPort = new Serial(this, com_port, 9600);                     // Windows
    //myPort = new Serial(this, "/dev/ttyACM0", 9600);             // Linux
    //myPort = new Serial(this, "/dev/cu.usbmodem14101", 9600);    // Mac
  }

  
  // wait for full frame of bytes
  bytesPerFrame = cameraWidth * cameraHeight * cameraBytesPerPixel;
  myPort.buffer(bytesPerFrame);  

  myImage = createImage(cameraWidth, cameraHeight, RGB);
}

void draw()
{
  image(myImage, 0, 0);
}

void serialEvent(Serial myPort) {
  byte[] frameBuffer = new byte[bytesPerFrame];

  // read the saw bytes in
  myPort.readBytes(frameBuffer);

  // create image to set byte values
  PImage img = createImage(cameraWidth, cameraHeight, RGB);

  // access raw bytes via byte buffer
  ByteBuffer bb = ByteBuffer.wrap(frameBuffer);
  bb.order(ByteOrder.BIG_ENDIAN);

  int i = 0;

  img.loadPixels();
  while (bb.hasRemaining()) {
    // read 16-bit pixel
    short p = bb.getShort();

    // convert RGB565 to RGB 24-bit
    int r = ((p >> 11) & 0x1f) << 3;
    int g = ((p >> 5) & 0x3f) << 2;
    int b = ((p >> 0) & 0x1f) << 3;

    // set pixel color
    img.pixels[i++] = color(r, g, b);
  }
  img.updatePixels();

  // assign image for next draw
  myImage = img;
}
