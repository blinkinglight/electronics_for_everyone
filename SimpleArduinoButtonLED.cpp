void setup() {
	pinMode(2, INPUT);
	pinMode(3, INPUT);
	pinMode(4, OUTPUT);
	pinMode(5, OUTPUT);
}

void loop() {
	// Turn pin 4 on/off based on
	// the input from pin 2
	if(digitalRead(2) == HIGH) {
		digitalWrite(4, HIGH);
	} else {
		digitalWrite(4, LOW);
	}

	// Turn pin 5 on/off based on
	// the input from pin 3
	if(digitalRead(3) == HIGH) {
		digitalWrite(5, HIGH);
	} else {
		digitalWrite(5, LOW);
	}
}
