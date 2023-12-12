void ultraiz()
{
  digitalWrite(trigiz, LOW);
  delayMicroseconds(4);
  digitalWrite(trigiz, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigiz, LOW);
  long times = pulseIn(echoiz, HIGH);
  distanciaiz = times * 0.034 / 2;
}

void ultrade()
{
  digitalWrite(trigde, LOW);
  delayMicroseconds(4);
  digitalWrite(trigde, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigde, LOW);
  long times = pulseIn(echode, HIGH);
  distanciade = times * 0.034 / 2;
}
