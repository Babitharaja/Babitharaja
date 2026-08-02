#include <DHT.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>


#define DHTPIN 4
#define DHTTYPE DHT11

#define GAS_SENSOR 34
#define FLAME_SENSOR 27

#define RELAY_PIN 26
#define BUZZER 25


DHT dht(DHTPIN, DHTTYPE);

LiquidCrystal_I2C lcd(0x27,16,2);


int temperature_limit = 30;

void setup()
{

Serial.begin(115200);

dht.begin();

lcd.init();
lcd.backlight();


pinMode(GAS_SENSOR,INPUT);
pinMode(FLAME_SENSOR,INPUT);

pinMode(RELAY_PIN,OUTPUT);
pinMode(BUZZER,OUTPUT);


digitalWrite(RELAY_PIN,HIGH);
digitalWrite(BUZZER,LOW);


lcd.setCursor(0,0);
lcd.print("Smart Fan System");

delay(2000);

lcd.clear();

}



void loop()
{

float temp = dht.readTemperature();

int gasValue = analogRead(GAS_SENSOR);

int flameStatus = digitalRead(FLAME_SENSOR);



Serial.print("Temperature:");
Serial.println(temp);

Serial.print("Gas:");
Serial.println(gasValue);



bool fanStatus=false;



// Temperature Control

if(temp >= temperature_limit)
{

digitalWrite(RELAY_PIN,LOW);  
fanStatus=true;

}
else
{

digitalWrite(RELAY_PIN,HIGH);
fanStatus=false;

}



// Gas and Flame Detection

if(gasValue > 1500 || flameStatus == LOW)
{

digitalWrite(BUZZER,HIGH);

}
else
{

digitalWrite(BUZZER,LOW);

}



// LCD Display


lcd.clear();

lcd.setCursor(0,0);
lcd.print("T:");
lcd.print(temp);
lcd.print("C ");

lcd.print("G:");
lcd.print(gasValue);



lcd.setCursor(0,1);


if(fanStatus)
{
lcd.print("Fan:ON ");
}
else
{
lcd.print("Fan:OFF ");
}



if(flameStatus==LOW)
{
lcd.print("Flame:YES");
}
else
{
lcd.print("Flame:NO");
}


delay(1000);

}