void setup() {
	pinMode(2, OUTPUT);
}

void loop() {
	if(analogRead(1) < 450) {
		digitalWrite(2, HIGH);
	} else {
		digitalWrite(2, LOW);
	}
}
