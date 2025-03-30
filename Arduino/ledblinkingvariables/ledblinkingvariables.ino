int red_led=2,green_led=3;
int temprature=21,moisture=40;

void setup(){
  pinMode(red_led,OUTPUT);
  pinMode(green_led,OUTPUT);
}

void loop(){
  if(temprature<=21){
    digitalWrite(green_led,HIGH);
    digitalWrite(red_led,LOW);
  }
  else{
    digitalWrite(red_led,HIGH);
    digitalWrite(green_led,LOW);
  }
}