const int photoresistor = A0;
const int piezoPin = 9;
const int greenPin = 6;
const int redPin = 11;
int photovalue;

void setup() {
  Serial.begin(9600);
  pinMode(piezoPin, OUTPUT);
  pinMode(photoresistor, INPUT); 
    pinMode(redPin, OUTPUT);
     pinMode(greenPin, OUTPUT);
}

// Plays a police siren loop and flashes lights in unison
void loop() {
  
  photovalue = analogRead(photoresistor);
  Serial.println(photovalue);
  if (photovalue > 100) {
    tone(piezoPin,  739.99, 500); //F#5
    digitalWrite(redPin, HIGH); 
    digitalWrite(greenPin, LOW); 
    delay(500);
    tone(piezoPin,  523.25, 500); //C5
    digitalWrite(redPin, LOW); 
   digitalWrite(greenPin, HIGH ); 
    delay(500);
  }
  else {
    digitalWrite(piezoPin, LOW); 
  }
}
