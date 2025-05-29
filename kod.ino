const int buttonPin = 2;  // a nyomógomb a 2 digitális bemenetre van kötve
int buttonState = 0;      // változó a nyomógomb állapotának tárolására
 
void setup() {
Serial.begin(115200);     // start serial communication at 115200 baud
pinMode(buttonPin, INPUT_PULLUP);  // a 2-es bemenetet pull-up ellenállással konfiguráljuk
}
 
void loop() {
buttonState = digitalRead(buttonPin);  // olvassuk a nyomógomb állapotát
 
if (buttonState == LOW) {  // ha a gomb lenyomva (LOW)
Serial.println("Benyomva");
} else {  // ha a gomb felengedve (HIGH)
Serial.println("Alapállás");
}
delay(50);  // kis késleltetés a stabilabb működés érdekében
}
