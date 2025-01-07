// Name: Mark Katigbak
// Connect 3 LEDs and make them to work one after the other using while loop

const int redLED = 3;
const int yellowLED = 5;
const int greenLED = 6;
const int fadeSpeed = 5;
int brightness = 0;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  fadeLED(redLED);
  fadeLED(yellowLED);
  fadeLED(greenLED);
}

void fadeLED(int colorLED) {  
  while(brightness <= 255) {
    analogWrite(colorLED, brightness);
    brightness += fadeSpeed;
    delay(15);
  }

  while(brightness >= 0) {
    analogWrite(colorLED, brightness);
    brightness -= fadeSpeed;
    delay(15);
  }
}