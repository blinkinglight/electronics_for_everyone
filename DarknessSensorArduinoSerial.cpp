void setup() {
	pinMode(2, OUTPUT);
	Serial.begin(9600);
}

void loop() {
	Serial.println(analogRead(1));
	if(analogRead(1) < 450) {
		digitalWrite(2, HIGH);
	} else {
		digitalWrite(2, LOW);
	}
}
