const int tempPin = A0;
const int motorPin = 9;

void setup() {
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  // Read sensor
  int sensorValue = analogRead(tempPin);

  // Convert ADC value to voltage
  float voltage = sensorValue * (5.0 / 1023.0);

  // TMP36 Temperature Conversion
  float temperature = (voltage - 0.5) * 100.0;

  int pwmValue;

  if (temperature < 27.0) {
    pwmValue = 0;
  }
  else if (temperature >= 40.0) {
    pwmValue = 225;
  }
  else {
    // Linear mapping between 27°C and 40°C
    pwmValue = map((int)(temperature * 10), 270, 400, 0, 225);
  }

  // Control motor speed
  analogWrite(motorPin, pwmValue);

  // Print output every 500 ms
  Serial.print("Temp:");
  Serial.print(temperature, 1);
  Serial.print("C, PWM:");
  Serial.println(pwmValue);

  delay(500);
}