#define PIN7 7

void setup() {
  pinMode(PIN7, OUTPUT);
  digitalWrite(PIN7, HIGH);
  delay(1000);
}

void loop() {
    digitalWrite(PIN7, LOW);
    delay(1000);
    for (int count=0; count < 5; count++){
    digitalWrite(PIN7, HIGH);
    delay(100);
    digitalWrite(PIN7, LOW);
    delay(100);
  }
  digitalWrite(7,HIGH);  
  while(1){}
}
