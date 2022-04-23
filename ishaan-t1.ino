// C++ code
//
void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(4, LOW);
  delay(10); // Delay a little bit to improve simulation performance
}