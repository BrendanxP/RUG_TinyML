void setup() {
  // Initialize baud rate to the default value
  Serial.begin(9600); 
}

void loop() {
  // Loop over all degrees with a certain stepsize
  for(int i = 0; i<360; i+=5) {
    // Calculate sin values (y) for the given i (x)
    float y1 = 1 * sin(i * M_PI / 180);
    float y2 = 2 * sin((i + 90) * M_PI / 180);
    float y3 = 5 * sin((i + 180) * M_PI / 180);
    
    // Print sine wave values
    Serial.print(y1);
    Serial.print(" ");
    Serial.print(y2);
    Serial.print(" ");
    Serial.println(y3);

    // Introduce 100ms delay per iteration
    delay(100);
  }
}
