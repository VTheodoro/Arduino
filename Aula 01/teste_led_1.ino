int led1 = 13;
int led2 = 12;
int led3 = 7;
int led4 = 4;

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
  delay(1000);
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led3, HIGH);
  delay(1000);
  digitalWrite(led4, HIGH);
  delay(1000);
}

