void setup() { // configurar as caracteristicas do arduino, entradas e tipos
  pinMode(10, OUTPUT);
}

void loop() { // se repete enquanto o arduino estiver ligado 
  digitalWrite(10, HIGH); // 
  delay(1000);
  digitalWrite(10,LOW);
  delay(1000);
}
