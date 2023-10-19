const int pin25out = 25;
const int pin32out = 32;
const int pin27out = 27;


void setup() {
  // Define o pino 25 como SAIDA
  pinMode(pin25out,OUTPUT);
  pinMode(pin32out,OUTPUT);
  pinMode(pin27out,OUTPUT);

  // Inicializa a porta serial de com. com o ESP32
  Serial.begin(115200);
  Serial.println("Iniciando a serial");
}
void loop() {
    // Envia 3.3V. para o pino 25
  digitalWrite(pin25out, HIGH);
  Serial.println("Acendendo");
  // Espera 1 seg.
  delay(500);
  // Envia 0V. para o pino 25
  digitalWrite(pin25out, LOW);
  Serial.println("Apagando");
  // Espera 1 seg.
  delay(500);
  //--------pino2-------------
    // Envia 3.3V. para o pino 25
  digitalWrite(pin27out, HIGH);
  Serial.println("Acendendo");
  // Espera 1 seg.
  delay(500);
  digitalWrite(pin27out, LOW);
  Serial.println("Apagando");
  // Espera 1 seg.
  delay(500);
  // Envia 3.3V. para o pino 25
  //-------------pino3-----------
    // Envia 3.3V. para o pino 25
  digitalWrite(pin32out, HIGH);
  Serial.println("Acendendo");
  // Espera 1 seg.
  delay(500);
  digitalWrite(pin32out, LOW);
  Serial.println("Apagando");
  // Espera 1 seg.
  delay(500);
}


/*
  //-------------pino3-----------
  digitalWrite(pin27out, HIGH);
  digitalWrite(pin32out, LOW);
  digitalWrite(pin25out, LOW);
  delay(1000);
}*/
