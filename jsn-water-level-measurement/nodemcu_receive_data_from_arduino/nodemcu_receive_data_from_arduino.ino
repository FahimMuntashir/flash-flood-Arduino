void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  char buffer[50]="";
  if(Serial.available()>0)
  {
//    char data = Serial.read();
    Serial.readBytesUntil('\n', buffer, 50);
//    Serial.readBytesUntil('\n', buffer, 20);

    Serial.println(buffer);
  }
}
