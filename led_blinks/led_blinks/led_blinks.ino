/*
 Name:		led_blinks.ino
 Created:	2/25/2018 5:11:40 PM
 Author:	Josh
*/

int green = 2;
int greenState = LOW;
unsigned long previousMillis = 0;
long onTime = 250;
long offTime = 250;

// the setup function runs once when you press reset or power the board
void setup() {
	
	pinMode(green, OUTPUT);

}

// the loop function runs over and over again until power down or reset
void loop() {

	unsigned long currentMillis = millis();

	if ((greenState == HIGH) && (currentMillis - previousMillis >= onTime))
	{
		greenState = LOW;
		previousMillis = currentMillis;
		digitalWrite(green, greenState);
	}

	else if ((greenState == LOW) && (currentMillis - previousMillis >= offTime))
	{
		greenState = HIGH;
		previousMillis = currentMillis;
		digitalWrite(green, greenState);
	}

  
}
