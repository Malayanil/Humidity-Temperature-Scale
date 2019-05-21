#include <dht.h> 								//Temperature and Humidity Sensor Library (Adafruit Library)
#include <LiquidCrystal.h> 						//LCD Library

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 			//Initializing LCD Function for RS, E, D4, D5, D6 and D7 Pins

dht DHT; 										//Initializing object for the Sensor

#define DHT11_PIN 7 							//Initializing Signal Pin for the Sensor Module

void setup()
{
  lcd.begin(16, 2);								//LCD Screen Initialization
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);				//Reading the signals from DHT Module

  lcd.setCursor(0,0); 							//Displaying Temperature on the LCD 0,0 Pane
  lcd.print("Temp: ");
  lcd.print(DHT.temperature);
  lcd.print((char)223);
  lcd.print("C");

  lcd.setCursor(0,1);							//Displaying Humidity on the LCD 0,1 Pane
  lcd.print("Humidity: ");
  lcd.print(DHT.humidity);
  lcd.print("%");

  delay(1000);									//Refreshing the LCD Screen and Displaying Updated Output
}
