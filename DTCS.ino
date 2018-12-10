int x=0;
int count=0;
int T=700;
int C=1;
int led=4;
void setup()
{
Serial.begin(9600);
pinMode(led,OUTPUT);
pinMode(13,OUTPUT);//green1
pinMode(12,OUTPUT);//yellow1
pinMode(11,OUTPUT);//red1
pinMode(8,OUTPUT);//green2
pinMode(9,OUTPUT);//yellow2
pinMode(10,OUTPUT);//red2
pinMode(7,OUTPUT);//green3
pinMode(6,OUTPUT);//yellow3
pinMode(5,OUTPUT);//red3
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
pinMode(A3,INPUT);
}
void loop()
{
  delay(1000);
digitalWrite(led,LOW);
delay(1000);
digitalWrite(led,HIGH);

delay(100);
int first=analogRead(A0);
int second=analogRead(A1);
int third=analogRead(A2);

Serial.println(first);
Serial.println(third);
Serial.println(second);
if(first>T && third<T && second<T)
{
count++;
digitalWrite(13,HIGH);
digitalWrite(5,HIGH);
digitalWrite(9,HIGH);
delay(5000);
digitalWrite(12,LOW);
digitalWrite(11,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(10,LOW);
digitalWrite(8,LOW);
}
else if(first>T && second>T && first>>second && third<T)
{
count++;
digitalWrite(13,HIGH);
digitalWrite(5,HIGH);
digitalWrite(9,HIGH);
delay(5000);
digitalWrite(12,LOW);
digitalWrite(8,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
}
else if(first>T && third>T && first>third && second<T)
{
digitalWrite(13,HIGH);
digitalWrite(5,HIGH);
digitalWrite(9,HIGH);
delay(5000);
digitalWrite(12,LOW);
digitalWrite(8,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
}

else if(second>T && first>T && third>T && first>second && first>third)
{
count++;
digitalWrite(13,HIGH);
digitalWrite(5,HIGH);
digitalWrite(9,HIGH);
delay(5000);
digitalWrite(12,LOW);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
digitalWrite(8,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
}
else if(second>T && first<T && third<T)
{
count++;
digitalWrite(8,HIGH);
digitalWrite(6,HIGH);
digitalWrite(11,HIGH);
delay(5000);
digitalWrite(13,LOW);
digitalWrite(12,LOW);
digitalWrite(5,LOW);
digitalWrite(7,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
}
else if(second>T && second>first && first>T && third<T)
{
  digitalWrite(8,HIGH);
digitalWrite(6,HIGH);
digitalWrite(11,HIGH);
delay(5000);
digitalWrite(13,LOW);
digitalWrite(12,LOW);
digitalWrite(5,LOW);
digitalWrite(7,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
}
else if(second>T && second>third && first<T && third>T)
{
digitalWrite(8,HIGH);
digitalWrite(6,HIGH);
digitalWrite(11,HIGH);
delay(5000);
digitalWrite(13,LOW);
digitalWrite(12,LOW);
digitalWrite(5,LOW);
digitalWrite(7,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
}
else if(second>T && first >T && third>T && second>first && second>third )
{
  digitalWrite(8,HIGH);
digitalWrite(6,HIGH);
digitalWrite(11,HIGH);
delay(5000);
digitalWrite(13,LOW);
digitalWrite(12,LOW);
digitalWrite(5,LOW);
digitalWrite(7,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
}
else if(third>T && first<T && second<T)
{
  digitalWrite(7,HIGH);
digitalWrite(12,HIGH);
digitalWrite(10,HIGH);
delay(5000);
digitalWrite(13,LOW);
digitalWrite(11,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
}
else if(third>T && first>T && second<T && third>first)
{
  digitalWrite(7,HIGH);
digitalWrite(12,HIGH);
digitalWrite(10,HIGH);
delay(5000);
digitalWrite(13,LOW);
digitalWrite(11,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
}
else if(third>T && first<T && second>T && third>second)
{digitalWrite(7,HIGH);
digitalWrite(12,HIGH);
digitalWrite(10,HIGH);
delay(5000);
digitalWrite(13,LOW);
digitalWrite(11,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
}
else if(third>T && first>T && second>T && third>second && third>first)
{
digitalWrite(7,HIGH);
digitalWrite(12,HIGH);
digitalWrite(10,HIGH);
delay(5000);
digitalWrite(13,LOW);
digitalWrite(11,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
}
else if(first>T && second>T && third>T && first==second && first>third )
{
digitalWrite(13,HIGH);
digitalWrite(9,HIGH);
digitalWrite(5,HIGH);
delay(5000);
digitalWrite(8,HIGH);
digitalWrite(12,HIGH);

digitalWrite(13,LOW);
digitalWrite(9,LOW);
digitalWrite(5,HIGH);
} 
else if(first>T && second>T && third>T && third>=second && third>first )
{
digitalWrite(8,HIGH);
digitalWrite(6,HIGH);
digitalWrite(11,HIGH);
delay(5000);
digitalWrite(7,HIGH);
digitalWrite(9,HIGH);

digitalWrite(8,LOW);
digitalWrite(6,LOW);
digitalWrite(11,HIGH);
} 
else if(first>T && third>T && second>T && first>=third && first>second )
{
digitalWrite(7,HIGH);
digitalWrite(12,HIGH);
digitalWrite(10,HIGH);
delay(5000);
digitalWrite(13,HIGH);
digitalWrite(6,HIGH);

digitalWrite(7,LOW);
digitalWrite(10,LOW);
digitalWrite(10,HIGH);
}
else
{

digitalWrite(13,HIGH);
digitalWrite(9,HIGH);
digitalWrite(5,HIGH);
delay(5000);
digitalWrite(13,LOW);
digitalWrite(9,LOW);
digitalWrite(5,LOW);
digitalWrite(8,HIGH);
digitalWrite(6,HIGH);
digitalWrite(11,HIGH);
delay(5000);
digitalWrite(11,LOW);
digitalWrite(6,LOW);
digitalWrite(8,LOW);
digitalWrite(7,HIGH);
digitalWrite(10,HIGH);
digitalWrite(12,HIGH);
delay(5000);
digitalWrite(7,LOW);
digitalWrite(10,LOW);
digitalWrite(12,LOW);

}

}
