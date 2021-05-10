int val0 = 0;
int val1 = 0;
int val2 = 0;
int val3 = 0;
int val4 = 0;
int val5 = 0;
int val6 = 0;
int val7 = 0;
float volt0 = 0;
float volt1 = 0;
float volt2 = 0;
float volt3 = 0;
float volt4 = 0;
float volt5 = 0;
float volt6 = 0;
float volt7 = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // Read from analog pins
  val0 = analogRead(A0);
  val1 = analogRead(A1);
  val2 = analogRead(A2);
  val3 = analogRead(A3);
  val4 = analogRead(A4);
  val5 = analogRead(A5);
  val6 = analogRead(A6);
  val7 = analogRead(A7);

  // Convert to voltage
  volt0 = val0 * (5.0/1023.0);
  volt1 = val1 * (5.0/1023.0);
  volt2 = val2 * (5.0/1023.0);
  volt3 = val3 * (5.0/1023.0);
  volt4 = val4 * (5.0/1023.0);
  volt5 = val5 * (5.0/1023.0);
  volt6 = val6 * (5.0/1023.0);
  volt7 = val7 * (5.0/1023.0);

  // Print to serial monitor
  Serial.print("A0 voltage: ");
  Serial.println(volt0);
  Serial.print("A1 voltage: ");
  Serial.println(volt1);
  Serial.print("A2 voltage: ");
  Serial.println(volt2);
  Serial.print("A3 voltage: ");
  Serial.println(volt3);
  Serial.print("A4 voltage: ");
  Serial.println(volt4);
  Serial.print("A5 voltage: ");
  Serial.println(volt5);
  Serial.print("A6 voltage: ");
  Serial.println(volt6);
  Serial.print("A7 voltage: ");
  Serial.println(volt7);
  Serial.println();
  delay(1000); 
}
