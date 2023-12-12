void setup()
{
  Serial.begin(9600);
  pinMode(trigiz, OUTPUT);
  pinMode(echoiz, INPUT);
  
  pinMode(trigde, OUTPUT);
  pinMode(echode, INPUT);
  
  pinMode(pwmLiz, OUTPUT);
  pinMode(enLiz, OUTPUT);
  pinMode(pwmRiz, OUTPUT);
  pinMode(enRiz, OUTPUT);
  
  pinMode(pwmLde, OUTPUT);
  pinMode(enLde, OUTPUT);
  pinMode(pwmRde, OUTPUT);
  pinMode(enRde, OUTPUT);

  
  digitalWrite(enLde, HIGH);
  digitalWrite(enRde, HIGH);
  digitalWrite(enLiz, HIGH);
  digitalWrite(enRiz, HIGH);
  delay(3000);
  palanca();
}
