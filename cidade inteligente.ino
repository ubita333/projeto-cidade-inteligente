const int ldrPin = A0;      // Entrada do divisor de tensão com LDR
const int ledPin = 13;      // LED indicador de escuridão

// Limite de leitura analógica (0 a 1023)
const int darkThreshold = 400;  // Ajuste conforme sua iluminação

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lightLevel = analogRead(ldrPin);
  Serial.print("Luz: ");
  Serial.println(lightLevel);

  if (lightLevel < darkThreshold) {
    digitalWrite(ledPin, HIGH);  // Está escuro → acende LED
  } else {
    digitalWrite(ledPin, LOW);   // Está claro → apaga LED
  }

  delay(500);
}
