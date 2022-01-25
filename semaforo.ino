const int ledcg=13;
const int ledcy=11;
const int ledcr=9;

const int ledpg=7;
const int ledpy=5;
const int ledpr=3;

void setup()
{
  pinMode(ledcg, OUTPUT);
  pinMode(ledcy, OUTPUT);
  pinMode(ledcr, OUTPUT);
  pinMode(ledpg, OUTPUT);
  pinMode(ledpy, OUTPUT);
  pinMode(ledpr, OUTPUT);
}

void loop()
{
  digitalWrite(ledcg, HIGH);
  digitalWrite(ledcy, LOW);   
  digitalWrite(ledcr, LOW);
  digitalWrite(ledpg, LOW);
  digitalWrite(ledpy, LOW);
  digitalWrite(ledpr, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(ledcg, LOW);
  digitalWrite(ledcy, HIGH);   
  digitalWrite(ledcr, LOW);
  digitalWrite(ledpg, LOW);
  digitalWrite(ledpy, LOW);
  digitalWrite(ledpr, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(ledcg, LOW);
  digitalWrite(ledcy, LOW);   
  digitalWrite(ledcr, HIGH);
  digitalWrite(ledpg, HIGH);
  digitalWrite(ledpy, LOW);
  digitalWrite(ledpr, LOW);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(ledcg, LOW);
  digitalWrite(ledcy, LOW);   
  digitalWrite(ledcr, HIGH);
  digitalWrite(ledpg, LOW);
  digitalWrite(ledpy, HIGH);
  digitalWrite(ledpr, LOW);
  delay(3000); // Wait for 1000 millisecond(s)
}