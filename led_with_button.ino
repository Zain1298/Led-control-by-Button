int ledPin= 11;
int Button=10;
void setup() {
 pinMode(11,OUTPUT);
 pinMode(10,INPUT);

}

void loop() {
if (digitalRead(10)==HIGH){
  digitalWrite(11,HIGH);
}

}
