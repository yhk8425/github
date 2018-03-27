const int PIN_1 = 2;
const int PIN_2 = 3;
const int PIN_3 = 4;
void setup() {
  pinMode(PIN_1,OUTPUT);
  pinMode(PIN_2,OUTPUT);
  pinMode(PIN_3,OUTPUT);
}

void loop() {
  digitalWrite(PIN_1,HIGH);
   delay(100);
   digitalWrite(PIN_1,LOW);
   delay(100);
  digitalWrite(PIN_2,HIGH);
   delay(100);
   digitalWrite(PIN_2,LOW);
   delay(100);
  digitalWrite(PIN_3,HIGH);
   delay(100);
   digitalWrite(PIN_3,LOW);
   delay(100);
}
