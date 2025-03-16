#include <SoftwareSerial.h>
#include <LiquidCrystal.h>
#include "dht.h"

SoftwareSerial nodemcu(1, 0);   // RX, TX
#define dht_apin A0             // DHT11 sensor pin
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

dht DHT;
int pinRedLed = 8;
int pinGreenLed = 9;
int pinSensor = A5;             // Methane sensor pin
int THRESHOLD = 250;
int buzzer = 10;

String mystring;                // For message handling

void setup() {
    Serial.begin(9600);
    nodemcu.begin(9600);

    lcd.begin(16, 2);
    pinMode(buzzer, OUTPUT);
    pinMode(pinRedLed, OUTPUT);
    pinMode(pinGreenLed, OUTPUT);
    pinMode(pinSensor, INPUT);
}

void loop() {
    // Read methane sensor data
    int rdata = analogRead(pinSensor);

    Serial.print("Methane Range: ");
    Serial.println(rdata);
    lcd.setCursor(0, 0);          // Set cursor to the first line
    lcd.print("Methane: ");
    lcd.print(rdata);             // Display methane value directly
    lcd.print("   ");             // Clears remaining characters

    // Check for gas threshold
    if (rdata >= THRESHOLD) {
        digitalWrite(pinRedLed, HIGH);
        digitalWrite(pinGreenLed, LOW);
        digitalWrite(buzzer, HIGH);
    } else {
        digitalWrite(pinRedLed, LOW);
        digitalWrite(pinGreenLed, HIGH);
        digitalWrite(buzzer, LOW);
    }

    // Display data on LCD and send via nodemcu
    if (nodemcu.available() > 0) {
        char data = nodemcu.read();
        lcd.setCursor(0, 1);     // Move cursor to the second line
        lcd.print("Msg: ");
        lcd.print(data);
        lcd.print("   ");        // Clears remaining characters
    }

    // Send methane data conditionally
    if (rdata < 250) {
        mystring = "Methane Range: " + String(rdata);
    } else {
        mystring = "Food Spoiled!";
    }

    nodemcu.println(mystring);
    Serial.println(mystring);
    lcd.setCursor(0, 1);
    lcd.print(mystring);
    lcd.print("   ");            // Clears remaining characters

    mystring = "";                // Reset the string for next loop

    // DHT11 Sensor Data
    DHT.read11(dht_apin);
    Serial.print("Humidity: ");
    Serial.print(DHT.humidity);
    Serial.print("%  ");
    Serial.print("Temperature: ");
    Serial.print(DHT.temperature);
    Serial.println("°C");

    delay(2000);   // Ensures stable readings
}
