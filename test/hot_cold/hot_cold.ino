void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);

}

void loop() {
  Serial.println("Hello World Testing with hot air on the CH340G external crystal... Am I printing nicely?");
  delay(10);
}
