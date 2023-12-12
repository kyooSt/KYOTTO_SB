void loop()
{
  // 0 blanco
  // 1 negro  
  ultraiz();
  ultrade();
  lineT();
  lineF();
  retro();
  if(lineaT == 1)
  {
    adelante(255);
    delay(700);
    derecha(255);
    delay(500);
  }
  if(lineaF == 1)
  {
    atras(255);
    delay(700);
    derecha(255);
    delay(500);
  }
  if(distanciaiz < 40)
  {
    adelante(255);
  }
  if(distanciade < 40)
  {
    adelante(255);
  }
  else 
  {
    derecha(150);
  }
}
