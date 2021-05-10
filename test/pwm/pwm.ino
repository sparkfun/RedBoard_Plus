float v1 = 0.5;
float v2 = 1.0;
float v3 = 1.5;
float v4 = 2.0;
float v5 = 2.5;
float v6 = 3.0;

void setup() {
  Serial.begin(115200);
  
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

  // Convert voltages to ADC value
  int aval1 = v1 * 255 / 5;
  int aval2 = v2 * 255 / 5;
  int aval3 = v3 * 255 / 5;
  int aval4 = v4 * 255 / 5;
  int aval5 = v5 * 255 / 5;
  int aval6 = v6 * 255 / 5;

  // For debug
  Serial.print("Analog value 1: ");
  Serial.println(aval1);
  Serial.print("Analog value 2: ");
  Serial.println(aval2);
  Serial.print("Analog value 3: ");
  Serial.println(aval3);
  Serial.print("Analog value 4: ");
  Serial.println(aval4);
  Serial.print("Analog value 5: ");
  Serial.println(aval5);
  Serial.print("Analog value 6: ");
  Serial.println(aval6);

  // Now, turn those pins on at that voltage
  analogWrite(3, aval1);
  analogWrite(5, aval2);
  analogWrite(6, aval3);
  analogWrite(9, aval4);
  analogWrite(10, aval5);
  analogWrite(11, aval6);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
