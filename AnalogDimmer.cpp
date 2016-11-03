void setup() {
	pinMode(3, OUTPUT);
}

void loop() {
	// Slowly turn the LED all the way up
	int i = 0;
	while(i < 255) {
		analogWrite(3, i);
		delay(10);
		i = i + 1;
	}

	// Slowly turn the LED all the way back down
	while(i >= 0) {
		analogWrite(3, i);
		delay(10);
		i = i - 1;
	}
}
