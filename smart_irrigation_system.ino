
#include <Servo.h>

Servo myservo; 
int m=0;
int n=0;
int pos = 0; 
void setup() {
  // put your setup code here, to run once:
pinMode(A0, INPUT_PULLUP);
pinMode(A1, INPUT_PULLUP);
pinMode(8,OUTPUT);
Serial.begin(9600);
myservo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:

int m= analogRead(A0);
int n= analogRead(A1);
Serial.println(m);
delay(10);
Serial.println(n);
delay(200);
if (m>=980)
{

  
 myservo.write(90);              // tell servo to go to position in variable 'pos'
        
  digitalWrite(8, HIGH); 
  delay(1000);
  }

else if(m<=970)
{

  digitalWrite(8, LOW);
  }
if (n>=980)
{

  myservo.write(0);              // tell servo to go to position in variable 'pos'
        
  digitalWrite(8, HIGH);
  delay(1000);
  
  }

else if(n<=970)
{

  digitalWrite(8, LOW);
  }
  
else
{
  digitalWrite(8, LOW);
  }
}
