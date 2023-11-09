// C++ code
//
int animation = 0;
int pinone=11;
int pintwo=12;
int pinthree=13;
void setup()
{
  pinMode(pinone, OUTPUT);
  pinMode(pintwo, OUTPUT);
  pinMode(pinthree, OUTPUT);
}

void loop()
{
  animation = 400;
  digitalWrite(pintwo, HIGH);
  delay(500); // Wait for 1 millisecond(s)
  digitalWrite(pintwo, LOW);
  delay(500); // Wait for 1 millisecond(s)
  digitalWrite(pintwo, HIGH);
  delay(500); // Wait for 1 millisecond(s)
  digitalWrite(pintwo, LOW);
  delay(500); 
  digitalWrite(pintwo, HIGH);
  delay(500); // Wait for 1 millisecond(s)
  digitalWrite(pintwo, LOW);
  delay(500); // Wait for 1 millisecond(s)
  digitalWrite(pintwo, HIGH);
  delay(500); // Wait for 1 millisecond(s)
  digitalWrite(pintwo, LOW);
   delay(500);
  delay(animation);
  
  //Red pin 
  
   digitalWrite(pinthree, HIGH);
  delay(500); // Wait for 1 millisecond(s)
  digitalWrite(pinthree, LOW);
  delay(500); // Wait for 1 millisecond(s)
  digitalWrite(pinthree, HIGH);
  delay(500); // Wait for 1 millisecond(s)
  digitalWrite(pinthree, LOW);
  delay(500); 
  digitalWrite(pinthree, HIGH);
  delay(500); // Wait for 1 millisecond(s)
  digitalWrite(pinthree, LOW);
  delay(500); // Wait for 1 millisecond(s)
  digitalWrite(pinthree, HIGH);
  delay(500); // Wait for 1 millisecond(s)
  digitalWrite(pinthree, LOW);
   delay(500);
  delay(animation);
  
  //yellow pin 
  
  digitalWrite(pinone, HIGH);
  delay(500); // Wait for 1 millisecond(s)
  digitalWrite(pinone, LOW);
  delay(500); // Wait for 1 millisecond(s)
  digitalWrite(pinone, HIGH);
  delay(500); // Wait for 1 millisecond(s)
  digitalWrite(pinone, LOW);
  delay(500); 
  
  
  
  
}