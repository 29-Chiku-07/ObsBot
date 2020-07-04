 const int IN1 = 7;
const int IN2 = 6;
const int IN3 = 5;
const int IN4 = 4;
int trigPin=8;
int echoPin=10;
const int ENA = 9;
const int ENB = 3;


void setup() {

  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
 pinMode (ENA, OUTPUT);
  pinMode (ENB, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {

long duration , distance;
digitalWrite(trigPin,HIGH);
delayMicroseconds(1000);
digitalWrite(trigPin,LOW);
duration = pulseIn(echoPin,HIGH);
distance =(duration/2)/29.1;
Serial.print(distance);
Serial.println("CM");
delay(10); 

    

  analogWrite(ENA, 100);
  analogWrite(ENB, 100); 

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  if(distance <=13){
 
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4,HIGH);
  delay(800);

  
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(1000);

        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);    
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);        
        delay(424);

   digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
        
        
      } 
  
  // put your main code here, to run repeatedly:

}
