const int BUTTON = 3;
const int BUTTON02 = 5;
const int PIN01 = 6;
const int PIN02 = 4;
void setup() {
  Serial.begin(9600);
  pinMode(PIN01,OUTPUT);
  pinMode(PIN02,OUTPUT);
  pinMode(BUTTON,INPUT);
  pinMode(BUTTON02,INPUT);
}

void loop() {
  int a = digitalRead(BUTTON);
  int b = digitalRead(BUTTON02);
  digitalWrite(PIN01,HIGH);
  digitalWrite(PIN02,HIGH);
  
  if(a==1 && b==1){
    digitalWrite(PIN01,HIGH);
    digitalWrite(PIN02,HIGH);
    delay(100);
    digitalWrite(PIN01,LOW);
    digitalWrite(PIN02,LOW);
  }
  else if(a == 1){
    digitalWrite(PIN02,LOW);
  }
  else if(b == 1){
    digitalWrite(PIN01,LOW);
  }
  Serial.println(a);
  Serial.println(b);
  delay(100);
}
