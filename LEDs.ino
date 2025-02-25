const int trig = 12;
const int echo = 13;

const int LED1 = 8;
const int LED2 = 7;
const int LED3 = 6;
const int LED4 = 5;
const int LED5 = 4;

int duration = 0;
int distance = 0;

void setup() 
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);
  distance = (duration / 2) / 28.5;
  Serial.println(distance);

  if (distance <= 10)
  {
    digitalWrite(LED1, HIGH);
  }
  else
  {
    digitalWrite(LED1, LOW);
  }
  if (distance <= 20)
  {
    digitalWrite(LED2, HIGH);
  }
  else
  {
    digitalWrite(LED2, LOW);
  }
  if (distance <= 30)
  {
    digitalWrite(LED3, HIGH);
  }
  else
  {
    digitalWrite(LED3, LOW);
  }
  if (distance <= 40)
  {
    digitalWrite(LED4, HIGH);
  }
  else
  {
    digitalWrite(LED4, LOW);
  }
  if (distance <= 50)
  {
    digitalWrite(LED5, HIGH);
  }
  else
  {
    digitalWrite(LED5, LOW);
  }
}
