 #include <LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
int Gas = 7;
int redLed = 6;
int greenLed = 5;
int speaker = 4;
int kipas = 2;

void setup()
{
  lcd.begin(20, 4);
  lcd.setCursor(0,0);
  lcd.print("Gas Detected :");
  lcd.setCursor(4,2);
  lcd.print("GAS AMMONIA");
  pinMode(Gas , INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(speaker, OUTPUT);
  pinMode(kipas, OUTPUT);
}

void loop()
{
  if(digitalRead(Gas) == HIGH)
{
  lcd.setCursor(14,0);lcd.print(" Yes");
digitalWrite(redLed, HIGH);

digitalWrite(greenLed, LOW);
digitalWrite(kipas, HIGH);
digitalWrite(speaker, HIGH);
delay(300);
}

  if(digitalRead(Gas) == LOW)
{
  lcd.setCursor(14,0);lcd.print(" No ");
digitalWrite(redLed, LOW);
digitalWrite(greenLed, HIGH);
digitalWrite(kipas, LOW);
digitalWrite(speaker, LOW);
delay(300);
}
}
