const int yellow_led=4;
const int blue_led=5;
const int green_led=6;
const int red_led=7;
void setup() {
  pinMode(yellow_led,OUTPUT);
  pinMode(blue_led,OUTPUT);
  pinMode(green_led,OUTPUT);
  pinMode(red_led,OUTPUT);
}

void loop() {
  digitalWrite(yellow_led,HIGH);
  digitalWrite(blue_led,HIGH);
  digitalWrite(green_led,HIGH);
  digitalWrite(red_led,HIGH);
  delay(1000);
  digitalWrite(yellow_led,LOW);
  digitalWrite(blue_led,LOW;
  digitalWrite(green_led,LOW);
  digitalWrite(red_led,LOW);
  delay(1000);

}
