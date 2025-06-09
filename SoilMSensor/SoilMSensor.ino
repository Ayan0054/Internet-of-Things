const int Sensor_pin = A1;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
}
void loop()
 {
  float Moisture_Percentage;
  int sensor_analog;
  sensor_analog=analogRead(Sensor_pin );
  Moisture_Percentage=(100-((sensor_analog/1023.00)*100));
  Serial.print("Moisture Percentage=");
  Serial.print(Moisture_Percentage);
  Serial.print("%\n\n");
  delay(1000);
  
  
}
