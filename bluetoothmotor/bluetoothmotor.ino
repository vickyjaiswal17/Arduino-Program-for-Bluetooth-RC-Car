int motorpin1=4;
int motorpin2=5;
int motorpin3=6;
int motorpin4=7;
int pwm1=3;
int pwm2=11;
int motorspeed=200;
char ch;

void setup() {
  // put your setup code here, to run once:
pinMode( motorpin1,OUTPUT);
pinMode( motorpin2,OUTPUT);
pinMode( motorpin3,OUTPUT);
pinMode( motorpin4,OUTPUT);
pinMode( pwm1,OUTPUT);
pinMode( pwm2,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {ch=Serial.read();}
    analogWrite(pwm1,motorspeed);
    analogWrite(pwm2,motorspeed);
  if(ch=='B')
  {
  digitalWrite(motorpin1,HIGH); 
  digitalWrite(motorpin2,LOW);
  digitalWrite(motorpin3,HIGH); 
  digitalWrite(motorpin4,LOW);    
  }
   else if(ch=='F')
  {
  digitalWrite(motorpin1,LOW) ;
  digitalWrite(motorpin2,HIGH);
  digitalWrite(motorpin3,LOW) ;
  digitalWrite(motorpin4,HIGH);     
  }
  else  if(ch=='L')
  {
  digitalWrite(motorpin1,HIGH); 
  digitalWrite(motorpin2,LOW);
  digitalWrite(motorpin3,LOW); 
  digitalWrite(motorpin4,HIGH);     
  }
   else if(ch=='R')
  {
  digitalWrite(motorpin1,LOW) ;
  digitalWrite(motorpin2,HIGH);
  digitalWrite(motorpin3,HIGH); 
  digitalWrite(motorpin4,LOW) ;     
  }
  else
  {
  digitalWrite(motorpin1,LOW) ;
  digitalWrite(motorpin2,LOW);
  digitalWrite(motorpin3,LOW); 
  digitalWrite(motorpin4,LOW) ;  
  }
 
 delay(42);
 ch='o'; 
}    
