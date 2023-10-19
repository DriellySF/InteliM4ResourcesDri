void setup()
{ // configurar as caracteristicas do arduino, entradas e tipos
  pinMode(10, OUTPUT);
}

void loop()
{                         // se repete enquanto o arduino estiver ligado
  digitalWrite(10, HIGH); //
  delay(500);
  digitalWrite(10, LOW);
  delay(500);
}
