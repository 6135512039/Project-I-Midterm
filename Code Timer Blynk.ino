#include <Wire.h>
#include "Adafruit_MCP23017.h"
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <TridentTD_LineNotify.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
#define LINE_TOKEN "WRwJDW2chARPYHj5J7RiB4ahSQfgcfbPZisDUdXAKIy"

 /*char auth[] = "vngxLwuLgN7VsXBOTtqxF2rcNb2v7Acd";*/
 char auth[] = "7YT0yM5Bz_GhM0Q7oVdeYhdKe-2fHIcr";
 char ssid[] = "Tang_CoE 2.4 GHz";
 char pass[] = "0810774499";
 
 #define BUZZER1 D3
 
 Adafruit_MCP23017 mcp;
 
 int LED1 = 8;  // IC ขา 1
 int LED2 = 9;  // IC ขา 2
 int LED3 = 10; // IC ขา 3 
 int LED4 = 11; // IC ขา 4
 int LED5 = 12; // IC ขา 5
 int LED6 = 13; // IC ขา 6
 int LED7 = 14; // IC ขา 7
 int LED8 = 15; // IC ขา 8

 
void setup() 
{
 Serial.begin(115200); 
 Blynk.begin(auth, ssid, pass);

  mcp.begin(); // use default address 0
  mcp.pinMode(LED1, OUTPUT);
  mcp.pinMode(LED2, OUTPUT);
  mcp.pinMode(LED3, OUTPUT);
  mcp.pinMode(LED4, OUTPUT);
  mcp.pinMode(LED5, OUTPUT);
  mcp.pinMode(LED6, OUTPUT);
  mcp.pinMode(LED7, OUTPUT);
  mcp.pinMode(LED8, OUTPUT);
      pinMode(BUZZER1, OUTPUT); 

  mcp.digitalWrite(LED1, 0);
  mcp.digitalWrite(LED2, 0);
  mcp.digitalWrite(LED3, 0);
  mcp.digitalWrite(LED4, 0);
  mcp.digitalWrite(LED5, 0);
  mcp.digitalWrite(LED6, 0);
  mcp.digitalWrite(LED7, 0);
  mcp.digitalWrite(LED8, 0);
}
BLYNK_WRITE(V1) 
  {
 if(param.asInt() == 1)
  { 
    Serial.print("LED ON\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("LED ON");
    mcp.digitalWrite(LED1, 1);
    delay(1000);
    Serial.print("Send Message\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Send Message");
    LINE.setToken(LINE_TOKEN);
    LINE.notify("ถึงเวลากินยาแล้ว");
    delay(1000); 
    Serial.print("Sound ON\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound ON");
    digitalWrite(BUZZER1, LOW);
    delay(15000); 
    Serial.print("Sound OFF\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound OFF");
    digitalWrite(BUZZER1, HIGH);
  }
  else
  {    
    Serial.print("LED OFF\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("LED OFF");
    mcp.digitalWrite(LED1, 0);
    delay(1000);
    Serial.print("Send Message\n");    
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Send Message");   
    LINE.setToken(LINE_TOKEN);
    LINE.notify("หมดเวลากินยาแล้ว");
    delay(1000);   
    Serial.print("Sound ON\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound ON");   
    digitalWrite(BUZZER1, LOW);
    delay(15000);
    Serial.print("Sound OFF\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound OFF");    
    digitalWrite(BUZZER1, HIGH);
    delay(2000);
    lcd.clear();
  }
 }

 BLYNK_WRITE(V2) 
  {
 if(param.asInt() == 1)
  { 
    Serial.print("LED ON\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("LED ON");
    mcp.digitalWrite(LED2, 1);
    delay(1000);
    Serial.print("Send Message\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Send Message");  
    LINE.setToken(LINE_TOKEN);
    LINE.notify("ถึงเวลากินยาแล้ว");
    delay(1000); 
    Serial.print("Sound ON\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound ON");
    digitalWrite(BUZZER1, LOW);
    delay(15000); 
    Serial.print("Sound OFF\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound OFF");
    digitalWrite(BUZZER1, HIGH);
  }
  else
  {    
    Serial.print("LED OFF\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("LED OFF");
    mcp.digitalWrite(LED2, 0);
    delay(1000);
    Serial.print("Send Message\n");     
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Send Message");   
    LINE.setToken(LINE_TOKEN);
    LINE.notify("หมดเวลากินยาแล้ว");
    delay(1000);   
    Serial.print("Sound ON\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound ON");    
    digitalWrite(BUZZER1, LOW);
    delay(15000);
    Serial.print("Sound OFF\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound OFF");    
    digitalWrite(BUZZER1, HIGH);
    delay(2000);
    lcd.clear();
  }
 }

 BLYNK_WRITE(V3) 
  {
 if(param.asInt() == 1)
  { 
    Serial.print("LED ON\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("LED ON");
    mcp.digitalWrite(LED3, 1);
    delay(1000);
    Serial.print("Send Message\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Send Message");  
    LINE.setToken(LINE_TOKEN);
    LINE.notify("ถึงเวลากินยาแล้ว");
    delay(1000); 
    Serial.print("Sound ON\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound ON");
    digitalWrite(BUZZER1, 0);
    delay(15000); 
    Serial.print("Sound OFF\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound OFF");
    digitalWrite(BUZZER1, HIGH);
  }
  else
  {    
    Serial.print("LED OFF\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("LED OFF");
    mcp.digitalWrite(LED3, 0);
    delay(1000);
    Serial.print("Send Message\n");     
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Send Message");    
    LINE.setToken(LINE_TOKEN);
    LINE.notify("หมดเวลากินยาแล้ว");
    delay(1000);   
    Serial.print("Sound ON\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound ON");    
    digitalWrite(BUZZER1, LOW);
    delay(15000);
    Serial.print("Sound OFF\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound OFF");    
    digitalWrite(BUZZER1, HIGH);
    delay(2000);
    lcd.clear();
  }
 }

 BLYNK_WRITE(V4) 
  {
 if(param.asInt() == 1)
  { 
    Serial.print("LED ON\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("LED ON");
    mcp.digitalWrite(LED4, 1);
    delay(1000);
    Serial.print("Send Message\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Send Message");  
    LINE.setToken(LINE_TOKEN);
    LINE.notify("ถึงเวลากินยาแล้ว");
    delay(1000); 
    Serial.print("Sound ON\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound ON");
    digitalWrite(BUZZER1, LOW);
    delay(15000); 
    Serial.print("Sound OFF\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound OFF");
    digitalWrite(BUZZER1, HIGH);
  }
  else
  {    
    Serial.print("LED OFF\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("LED OFF");
    mcp.digitalWrite(LED4, 0);
    delay(1000);
    Serial.print("Send Message\n");     
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Send Message");    
    LINE.setToken(LINE_TOKEN);
    LINE.notify("หมดเวลากินยาแล้ว");
    delay(1000);   
    Serial.print("Sound ON\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound ON");    
    digitalWrite(BUZZER1, LOW);
    delay(15000);
    Serial.print("Sound OFF\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound OFF");    
    digitalWrite(BUZZER1, HIGH);
    delay(2000);
    lcd.clear();
  }
 }

 BLYNK_WRITE(V5) 
  {
 if(param.asInt() == 1)
  { 
    Serial.print("LED ON\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("LED ON");
    mcp.digitalWrite(LED5, 1);
    delay(1000);
    Serial.print("Send Message\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Send Message");  
    LINE.setToken(LINE_TOKEN);
    LINE.notify("ถึงเวลากินยาแล้ว");
    delay(1000); 
    Serial.print("Sound ON\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound ON");
    digitalWrite(BUZZER1, LOW);
    delay(15000); 
    Serial.print("Sound OFF\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound OFF");
    digitalWrite(BUZZER1, HIGH);
  }
  else
  {    
    Serial.print("LED OFF\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("LED OFF");
    mcp.digitalWrite(LED5, 0);
    delay(1000);
    Serial.print("Send Message\n");     
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Send Message");    
    LINE.setToken(LINE_TOKEN);
    LINE.notify("หมดเวลากินยาแล้ว");
    delay(1000);   
    Serial.print("Sound ON\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound ON");    
    digitalWrite(BUZZER1, LOW);
    delay(15000);
    Serial.print("Sound OFF\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound OFF");    
    digitalWrite(BUZZER1, HIGH);
    delay(2000);
    lcd.clear();
  }
 }

 BLYNK_WRITE(V6) 
  {
 if(param.asInt() == 1)
  { 
    Serial.print("LED ON\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("LED ON");
    mcp.digitalWrite(LED6, 1);
    delay(1000);
    Serial.print("Send Message\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Send Message");  
    LINE.setToken(LINE_TOKEN);
    LINE.notify("ถึงเวลากินยาแล้ว");
    delay(1000); 
    Serial.print("Sound ON\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound ON");
    digitalWrite(BUZZER1, LOW);
    delay(15000); 
    Serial.print("Sound OFF\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound OFF");
    digitalWrite(BUZZER1, HIGH);
  }
  else
  {    
    Serial.print("LED OFF\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("LED OFF");
    mcp.digitalWrite(LED6, 0);
    delay(1000);
    Serial.print("Send Message\n");     
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Send Message");    
    LINE.setToken(LINE_TOKEN);
    LINE.notify("หมดเวลากินยาแล้ว");
    delay(1000);   
    Serial.print("Sound ON\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound ON");    
    digitalWrite(BUZZER1, LOW);
    delay(15000);
    Serial.print("Sound OFF\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound OFF");    
    digitalWrite(BUZZER1, HIGH);
    delay(2000);
    lcd.clear();
  }
 }
 
 
 BLYNK_WRITE(V7) 
  {
 if(param.asInt() == 1)
  { 
    Serial.print("LED ON\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("LED ON");
    mcp.digitalWrite(LED7, 1);
    delay(1000);
    Serial.print("Send Message\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Send Message");  
    LINE.setToken(LINE_TOKEN);
    LINE.notify("ถึงเวลากินยาแล้ว");
    delay(1000); 
    Serial.print("Sound ON\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound ON");
    digitalWrite(BUZZER1, LOW);
    delay(15000); 
    Serial.print("Sound OFF\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound OFF");
    digitalWrite(BUZZER1, HIGH);
  }
  else
  {    
    Serial.print("LED OFF\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("LED OFF");
    mcp.digitalWrite(LED7, 0);
    delay(1000);
    Serial.print("Send Message\n");     
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Send Message");    
    LINE.setToken(LINE_TOKEN);
    LINE.notify("หมดเวลากินยาแล้ว");
    delay(1000);   
    Serial.print("Sound ON\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound ON");    
    digitalWrite(BUZZER1, LOW);
    delay(15000);
    Serial.print("Sound OFF\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound OFF");    
    digitalWrite(BUZZER1, HIGH);
    delay(2000);
    lcd.clear();
  }
 }
 
 BLYNK_WRITE(V8) 
  {
 if(param.asInt() == 1)
  { 
    Serial.print("LED ON\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("LED ON");
    mcp.digitalWrite(LED8, 1);
    delay(1000);
    Serial.print("Send Message\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Send Message");  
    LINE.setToken(LINE_TOKEN);
    LINE.notify("ถึงเวลากินยาแล้ว");
    delay(1000); 
    Serial.print("Sound ON\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound ON");
    digitalWrite(BUZZER1, LOW);
    delay(15000); 
    Serial.print("Sound OFF\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound OFF");
    digitalWrite(BUZZER1, HIGH);
  }
  else
  {    
    Serial.print("LED OFF\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("LED OFF");
    mcp.digitalWrite(LED8, 0);
    delay(1000);
    Serial.print("Send Message\n");     
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Send Message");    
    LINE.setToken(LINE_TOKEN);
    LINE.notify("หมดเวลากินยาแล้ว");
    delay(1000);   
    Serial.print("Sound ON\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound ON");    
    digitalWrite(BUZZER1, LOW);
    delay(15000);
    Serial.print("Sound OFF\n");
    lcd.begin();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Sound OFF");    
    digitalWrite(BUZZER1, HIGH);
    delay(2000);
    lcd.clear();
  }
 }

 
void loop()
{
digitalWrite(BUZZER1, HIGH);
Blynk.run();
}
