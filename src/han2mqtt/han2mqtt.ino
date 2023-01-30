void setup() {
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:

}

void serialEvent(){
    while (Serial.available()) {
      Serial.println("Available");

      String message = Serial.readStringUntil('\n');

      Serial.println(message);
    }


    Serial.println("Done!");
}
