int red=4;
int yellow=3;
int green=2;

void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  int p=analogRead(A0);
  int q=analogRead(A1);
  int r=analogRead(A2);
  int s=analogRead(A3);

  
  if ( p<500 &&  q<500 && r<500 && s<500)
  {
    digitalWrite(2,HIGH);
    delay(1000000);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    delay(5000);
    digitalWrite(4,HIGH);
  }

  else if( p<500 &&  q<500 && r<500 && s>500)
  {
    digitalWrite(2,HIGH);
    delay(500000);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    delay(500);
    digitalWrite(4,HIGH);
  }
  else if( p<500 &&  q<500 && r>500 && s<500)
  {
    digitalWrite(2,HIGH);
    delay(25000);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    delay(500);
    digitalWrite(4,HIGH);
  }

  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  // put your main code here, to run repeatedly:

}
