int led1 = 4;
int led2 = 7;
int led3 = 12;
int led4 = 13;

void setup()
{
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
}

void loop()
{
digitalWrite(led1, HIGH);
delay(200);
digitalWrite(led2, HIGH);
delay(200);
digitalWrite(led3, HIGH);
delay(200);
digitalWrite(led4, HIGH);
delay(200);
digitalWrite(led4, LOW);
delay(200);
digitalWrite(led3, LOW);
delay(200);
digitalWrite(led2, LOW);
delay(200);
digitalWrite(led1, LOW);
delay(200);
}

