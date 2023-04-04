const int led = 6;

void setup() {
  Serial.begin(115200);
  pinMode(led, OUTPUT);
}

void loop() {
  if(Serial.available()) {
    char userInput=Serial.read();
    switch(userInput) {
      case '1':
        analogWrite(led,HIGH);
        delay(500);
        analogWrite(led,LOW);
        break;
      case '2':
        analogWrite(led,HIGH);
        delay(500);
        analogWrite(led,LOW);
        delay(500);
        analogWrite(led,HIGH);
        delay(500);
        analogWrite(led,LOW);
        break;
      default:break;
    }
  }
}
