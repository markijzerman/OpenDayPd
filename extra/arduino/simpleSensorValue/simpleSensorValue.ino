int sensorValue = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  sensorValue = analogRead(0);
  Serial.write(sensorValue);
  delay(100);
}

