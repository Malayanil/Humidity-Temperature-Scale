# Humidity and Temperature Scale Implentation using Arduino UNO R3

Welcome to the Humidity and Temperature Scale Project Repository. This project was implemented on hardware, the details are stated below in this READ ME File.
<br>
<h3>INDEX</h3>
<ol>
  <li>Introduction</li>
  <li>Hardware and Software Requirements</li>
  <li>Hardware Assembly</li>
  <li>Algorithm and Code</li>
  <li>Working Images</li>
</ol>
 
 <hr>

                                                  ---END OF SECTION---

<hr>

<h3>1. Introduction</h3>
<p>
  The <b>Arduino Uno R3</b> is an open-source microcontroller board based on the Microchip <b>ATmega328P</b> microcontroller and developed by Arduino.cc. The board is equipped with sets of digital and analog input/output pins that may be interfaced to various expansion boards and other circuits.
</p>
<p>
  Our model uses this board to decipher the analog signals passed from the <b>DHT11 Sensor</b> and then displays the Humidity and Temperature data on the LCD Board.
</p>

 <hr>

                                                  ---END OF SECTION---

<hr>

<h3>2. Hardware and Software Requirements</h3>
<p>
  <ol>
	<li>Arduino UNO R3</li>
	<li>DHT11 (Humidity and Temperature Sensor Module)</li>
	<li>LCD 16x2 Board</li>
	<li>Jumper Wires</li>
	<li>Bread Board</li>
	<li>2 Resistors (680 Ω)</li>
	<li>Arduino IDE</li>
  </ol>
All the images are representation of the hardware that was used.
</p><br>
<p>
  <img src = "https://github.com/Malayanil/Humidity-Temperature-Scale/blob/master/Images/all.jpg">
</p>

 <hr>

                                                  ---END OF SECTION---

<hr>

<h3>3. Hardware Assembly</h3>

<p>
The following connections were made.

<ul>
<li>DHT11 VSS to Arduino 5V</li>
<li>DHT11 Signal to Arduino Pin 7</li>
<li>DHT11 GND to Arduino GND</li>
<li>LCD VSS to Arduino GND</li>
<li>LCD VCC to Arduino 5V</li>
<li>LCD V0 to Arduino Pin 6 with 2 Resistors in <i><b>Serial</b></i></li>
<li>LCD RS to Arduino Pin 12</li>
<li>LCD RW to Arduino GND</li>
<li>LCD E to Arduino Pin 11</li>
<li>LCD D0 through D3 to Arduino GND</li>
<li>LCD D4 to Arduino Pin 4</li>
<li>LCD D5 to Arduino Pin 5</li>
<li>LCD D6 to Arduino Pin 6</li>
<li>LCD D7 to Arduino Pin 2</li>
</ul>
</p>
<br>
<p>
  The circuit connections are shown in the image below.
  <br>
  <img src = "https://github.com/Malayanil/Humidity-Temperature-Scale/blob/master/Images/circuit.jpg" height=400 width=600>
  <br>
</p>

 <hr>

                                                  ---END OF SECTION---

<hr>

<h3>4. Algortihm and Code</h3>
<p>
  <b>Algorithm</b>

The DHT11 Sensor Module senses the surroundings and relays the data to the Arduino UNO R3. The Arduino UNO R3 then displays the data on the LCD. The sensor module is accurate to a specific extent as mentioned on the merchant websites.
</p>
<br>

  <b>Code</b>
  
The code is uploaded in the file 'dht11.ino', and displayed below.
<br>

                  #include <dht.h> 							
                  //Temperature and Humidity Sensor Library (Adafruit Library)
                  
                  #include <LiquidCrystal.h> 		
                  //LCD Library

                  LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 		
                  //Initializing LCD Function for RS, E, D4, D5, D6 and D7 Pins

                  dht DHT; 										  
                  //Initializing object for the Sensor

                  #define DHT11_PIN 7 					
                  //Initializing Signal Pin for the Sensor Module

                  void setup()
                  {
                    lcd.begin(16, 2);						
                    //LCD Screen Initialization
                  }

                  void loop()
                  {
                    int chk = DHT.read11(DHT11_PIN);		
                    //Reading the signals from DHT Module

                    lcd.setCursor(0,0); 				
                    //Displaying Temperature on the LCD 0,0 Pane
                    
                    lcd.print("Temp: ");
                    lcd.print(DHT.temperature);
                    lcd.print((char)223);
                    lcd.print("C");

                    lcd.setCursor(0,1);					
                    //Displaying Humidity on the LCD 0,1 Pane
                    
                    lcd.print("Humidity: ");
                    lcd.print(DHT.humidity);
                    lcd.print("%");

                    delay(1000);							 
                    //Refreshing the LCD Screen and Displaying Updated Output
                  }

<br>

 <hr>

                                                  ---END OF SECTION---

<hr>

<h3>5. Working Images</h3>
<p>
  
  <table>
    <tr>
      <td><b>Front</b><br><img src= "https://github.com/Malayanil/Humidity-Temperature-Scale/blob/master/Images/Front.jpg" height=350 width=400></td>
      <td><b>Top</b><br><img src= "https://github.com/Malayanil/Humidity-Temperature-Scale/blob/master/Images/Top.jpg" height=350 width=400></td>
    </tr>
    <tr>
      <td><b>Side</b><br><img src= "https://github.com/Malayanil/Humidity-Temperature-Scale/blob/master/Images/Side.jpg" height=350 width=400></td>
      <td><b>Angled</b><br><img src= "https://github.com/Malayanil/Humidity-Temperature-Scale/blob/master/Images/Angled.jpg" height=350 width=400></td>
    </tr>
   </table> 
   
</p>

 <hr>

                                                  ---END OF SECTION---

<hr>
