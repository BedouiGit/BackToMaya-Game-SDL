
const int buttonPin = 5;
const int buttonPin1 = 6;
char r;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(2,OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin1,INPUT);
}
void loop() {
  bool yeet=0,yup=0;
  int buttonState = 0;
  int buttonState1 = 0;
  // put your main code here, to run repeatedly:
  
  buttonState = digitalRead(buttonPin);
  buttonState1 = digitalRead(buttonPin1);
  
  if(buttonState == HIGH)
  {
    r='5';
    yeet=true;
   Serial.write(r);
      digitalWrite(2,HIGH);
   delay(100);
   digitalWrite(2,LOW);
  }

  if(buttonState1 == HIGH)
  {
    yup=1;
    r='4';
   Serial.write(r);
      digitalWrite(2,HIGH);
   delay(100);
   digitalWrite(2,LOW);
  }
  if(!yeet&&!yup){
   r='0';
   Serial.write(r);  
  
  }
  delay(100);
 }
