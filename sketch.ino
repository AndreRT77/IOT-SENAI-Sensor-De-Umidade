const int PINO_SENSOR_UMIDADE = 34;
const int PINO_LED_SECO = 26;

const int LIMIAR_SECO = 2000;

void setup() {
	Serial.begin(115200);

	pinMode(PINO_LED_SECO, OUTPUT);

}

void loop() {
	int valor_unidade = analogRead(PINO_SENSOR_UMIDADE);

	Serial.print("Valor do sensor: ");
	Serial.println(valor_unidade);

	if (valor_unidade > LIMIAR_SECO){
	Serial.println("ALERTA: Solo seco! É hora de regar.");
	digitalWrite(PINO_LED_SECO, HIGH);
	}
	else {
	Serial.println("Solo úmido, tudo certo");
	digitalWrite(PINO_LED_SECO, LOW);
	}

	delay(5000);
}