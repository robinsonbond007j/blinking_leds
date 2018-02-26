/*
 Name:		led_blinks.ino
 Created:	2/25/2018 5:11:40 PM
 Author:	Josh
*/

int green = 2;
int greenState = LOW;

int yellow = 3;
int yellowState = LOW;

int red = 4;
int redState = LOW;


unsigned long previousMillis = 0;
long onTime = 500;
long offTime = 500;

unsigned long previousMillis2 = 0;
long onTime2 = 500;
long offTime2 = 1000;

unsigned long previousMillis3 = 0;
long onTime3 = 500;
long offTime3 = 1500;

// the setup function runs once when you press reset or power the board
void setup() {
	
	pinMode(green, OUTPUT);
	pinMode(yellow, OUTPUT);
	pinMode(red, OUTPUT);

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

	if ((yellowState == HIGH) && (currentMillis - previousMillis2 >= onTime2))
	{
		yellowState = LOW;
		previousMillis2 = currentMillis;
		digitalWrite(yellow, yellowState);
	}

	else if ((yellowState == LOW) && (currentMillis - previousMillis2 >= offTime2))
	{
		yellowState = HIGH;
		previousMillis2 = currentMillis;
		digitalWrite(yellow, yellowState);
	}

	if ((redState == HIGH) && (currentMillis - previousMillis3 >= onTime3))
	{
		redState = LOW;
		previousMillis3 = currentMillis;
		digitalWrite(red, redState);
	}

	else if ((redState == LOW) && (currentMillis - previousMillis3 >= offTime3))
	{
		redState = HIGH;
		previousMillis3 = currentMillis;
		digitalWrite(red, redState);
	}
  
}
