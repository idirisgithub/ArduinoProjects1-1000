// C++ code
//
int pin1=8;
int pin2=9;
int pin3=10;
int pin4=11;
int animation=0;
int delaytime=500;
void setup()
{
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
}

void loop()
{
  
  delay(delaytime); // Wait for 1 millisecond(s)
  digitalWrite(pin1, HIGH); // 1
  delay(delaytime); // Wait for 1 millisecond(s)
  digitalWrite(pin1, LOW);
  delay(delaytime); // Wait for 1 millisecond(s)
  
  digitalWrite(pin2, HIGH);//2
  delay(delaytime); // Wait for 1 millisecond(s)
  digitalWrite(pin2, LOW);
  delay(delaytime); // Wait for 1 millisecond(s)
  
  digitalWrite(pin2, HIGH);//3
  digitalWrite(pin1, HIGH);
  delay(delaytime); // Wait for 1 millisecond(s)
  digitalWrite(pin2, LOW);
  digitalWrite(pin1, LOW);
  delay(delaytime); // Wait for 1 millisecond(s)
  
  digitalWrite(pin3, HIGH);//4
  delay(delaytime); // Wait for 1 millisecond(s)
  digitalWrite(pin3, LOW);
  delay(delaytime); // Wait for 1 millisecond(s)
  
   digitalWrite(pin1, HIGH);//5
  digitalWrite(pin3, HIGH);//
  delay(delaytime); // Wait for 1 millisecond(s)
  digitalWrite(pin1, LOW);
  digitalWrite(pin3, LOW);
  delay(delaytime); // Wait for 1 millisecond(s)
  
   digitalWrite(pin2, HIGH);//6
  digitalWrite(pin3, HIGH);
  delay(delaytime); // Wait for 1 millisecond(s)
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  delay(delaytime); // Wait for 1 millisecond(s)
  
  digitalWrite(pin1, HIGH);//7
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  delay(delaytime); // Wait for 1 millisecond(s)
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  delay(delaytime); // Wait for 1 millisecond(s)
  
  digitalWrite(pin4, HIGH);//8
  delay(delaytime); // Wait for 1 millisecond(s)
  digitalWrite(pin4, LOW);
  delay(delaytime); // Wait for 1 millisecond(s)
  
  digitalWrite(pin1, HIGH);//9
  digitalWrite(pin4, HIGH);
  delay(delaytime); // Wait for 1 millisecond(s)
  digitalWrite(pin1, LOW);
  digitalWrite(pin4, LOW);
  delay(delaytime); // Wait for 1 millisecond(s)
  
  digitalWrite(pin2, HIGH);//10
  digitalWrite(pin4, HIGH);
  delay(delaytime); // Wait for 1 millisecond(s)
  digitalWrite(pin2, LOW);
  digitalWrite(pin4, LOW);
  delay(delaytime); // Wait for 1 millisecond(s)
  
  digitalWrite(pin1, HIGH);//11
  digitalWrite(pin2, HIGH);
  digitalWrite(pin4, HIGH);
  delay(delaytime); // Wait for 1 millisecond(s)
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin4, LOW);
  delay(delaytime); // Wait for 1 millisecond(s)
  
  digitalWrite(pin3, HIGH);//12
  digitalWrite(pin4, HIGH);
  delay(delaytime); // Wait for 1 millisecond(s)
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  delay(delaytime); // Wait for 1 millisecond(s)
  
  digitalWrite(pin1, HIGH);//13
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  delay(delaytime); // Wait for 1 millisecond(s)
  digitalWrite(pin1, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  delay(delaytime); // Wait for 1 millisecond(s)
  
  digitalWrite(pin2, HIGH);//14
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  delay(delaytime); // Wait for 1 millisecond(s)
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  delay(delaytime); // Wait for 1 millisecond(s)
  
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);//15
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  delay(delaytime); // Wait for 1 millisecond(s)
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  delay(delaytime); // Wait for 1 millisecond(s)
  
  
  
  
  
}