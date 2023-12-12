void adelante(int v)
{
  analogWrite(pwmLiz, 0);
  analogWrite(pwmRiz, v);
  
  analogWrite(pwmLde, v);
  analogWrite(pwmRde, 0);
}

void derecha(int v)
{
  analogWrite(pwmLiz, 0);
  analogWrite(pwmRiz, v);
  
  analogWrite(pwmLde, 0);
  analogWrite(pwmRde, v);
}

void izquierda(int v)
{
  analogWrite(pwmLiz, v);
  analogWrite(pwmRiz, 0);
  
  analogWrite(pwmLde, v);
  analogWrite(pwmRde, 0);
}

void atras(int v)
{
  analogWrite(pwmLiz, v);
  analogWrite(pwmRiz, 0);
  
  analogWrite(pwmLde, 0);
  analogWrite(pwmRde, v);
}


void paro()
{
  analogWrite(pwmLiz, 0);
  analogWrite(pwmRiz, 0);
  
  analogWrite(pwmLde, 0);
  analogWrite(pwmRde, 0);
}

void palanca()
{
  atras(255);
  delay(100);
  adelante(255);
  delay(100);
  paro();
}
