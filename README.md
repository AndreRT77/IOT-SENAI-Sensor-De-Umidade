# IOT-SENAI-Sensor-De-Umidade

Neste Projeto fizemos um sensor de umidade, utilizamos um LDR, Esp32, Sensor de Umidade, resistores e Leds, fizemos a simulação e o código no Wowki em formato Blink, e depois, utilizamos o Arduino IDE para mandar para o Modelo físico.

# Modelo Físico
https://youtu.be/oH0KGek45bU

# Simulação
https://wokwi.com/projects/457659352900955137

# Código
const int PINO_SENSOR_UMIDADE = 34;
const int PINO_LED_SECO = 26;

int LIMIAR_SECO = 2500;

void setup() {
  Serial.begin(115200);
  pinMode(PINO_LED_SECO, OUTPUT);
}

void loop() {
  int valor = analogRead(PINO_SENSOR_UMIDADE);

  Serial.print("Valor do sensor: ");
  Serial.println(valor);

  if (valor > LIMIAR_SECO) {
    digitalWrite(PINO_LED_SECO, HIGH);
  } else {
    digitalWrite(PINO_LED_SECO, LOW);
  }

  delay(2000);
}
