int LEDpin1 = 13;  // Pin for the first LED
int LEDpin2 = 12;  // Pin for the second LED
int LEDpin3 = 11;  // Pin for the third LED
int delayT = 1000; // Delay time (in milliseconds)

void setup() {
  // Initialize all pins as outputs
  pinMode(LEDpin1, OUTPUT);
  pinMode(LEDpin2, OUTPUT);
  pinMode(LEDpin3, OUTPUT);
}

void loop() {
  // Turn on LED1 and turn off others
  digitalWrite(LEDpin1, HIGH);
  digitalWrite(LEDpin2, LOW);
  digitalWrite(LEDpin3, LOW);
  delay(delayT);   // Wait for delayT milliseconds

  // Turn on LED2 and turn off others
  digitalWrite(LEDpin1, LOW);
  digitalWrite(LEDpin2, HIGH);
  digitalWrite(LEDpin3, LOW);
  delay(delayT);   // Wait for delayT milliseconds

  // Turn on LED3 and turn off others
  digitalWrite(LEDpin1, LOW);
  digitalWrite(LEDpin2, LOW);
  digitalWrite(LEDpin3, HIGH);
  delay(delayT);   // Wait for delayT milliseconds
}
