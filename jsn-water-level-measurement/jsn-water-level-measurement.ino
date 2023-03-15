int trigpin = 10;
int echopin =11;
float distance;
float duration;
void setup() {
  // put your setup code here, to run once:
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigpin,LOW);
  delay(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);
  duration = pulseIn(echopin, HIGH);
  distance = (duration*0.034)/2;
  Serial.print("The Distance is = ");
  Serial.print(distance);
  Serial.print("cm\n");
  delay(500);
}
