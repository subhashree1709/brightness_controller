int potentiometerPIN = 15;   
int LEDpin = 18; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LEDpin, OUTPUT); 
  ledcSetup(0, 4000, 8);
}

void loop() {
  // put your main code here, to run repeatedly:
    int analogValue = analogRead(potentiometerPIN);
    int brightness = map(analogValue, 0, 4095, 0, 255);
    ledcWrite(0, brightness); // set the brightness of the LED
    // wait for 30 milliseconds to see the dimming effect
    Serial.println(brightness);
    delay(30);
}    
