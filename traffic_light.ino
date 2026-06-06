const int redveh=8;
const int yellowveh=9;
const int greenveh=10;
const int redped=11;
const int greenped=12;
const int button=2;
bool state=false;
void setup(){
  pinMode(redveh,OUTPUT);
  pinMode(yellowveh,OUTPUT);
  pinMode(greenveh,OUTPUT);
  pinMode(redped,OUTPUT);
  pinMode(greenped,OUTPUT);
  pinMode(button,INPUT_PULLUP);
}
void loop(){
  digitalWrite(greenveh,HIGH);
  digitalWrite(yellowveh,LOW);
  digitalWrite(redveh,LOW);
  digitalWrite(redped,HIGH);
  digitalWrite(greenped,LOW);
  delay(2000);
  for(int i=0;i<50;i++){
    if(digitalRead(button)==LOW){
      delay(50);
      if(digitalRead(button)==LOW){
        state=true;
        break;
      }
    }
    delay(100);
  }
  if(state==true){
    pedestriancross();
    state=false;
    return;
  }
  digitalWrite(greenveh,LOW);
  digitalWrite(yellowveh,HIGH);
  delay(2000);
  digitalWrite(yellowveh,LOW);
  digitalWrite(redveh,HIGH);
  delay(2000);
  digitalWrite(redveh,LOW);
}
void pedestriancross(){
  digitalWrite(greenveh,LOW);
  digitalWrite(yellowveh,HIGH);
  delay(2000);
  digitalWrite(yellowveh,LOW);
  digitalWrite(redveh,HIGH);
  delay(2000);
  digitalWrite(redped,LOW);
  digitalWrite(greenped,HIGH);
  delay(5000);
  digitalWrite(redped,HIGH);
  digitalWrite(greenped,LOW);
  digitalWrite(redveh,LOW);
  digitalWrite(greenveh,HIGH);
}