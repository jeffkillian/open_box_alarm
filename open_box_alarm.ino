const int photoresistor = A0;
const int piezo = 9;
int photovalue;

void setup() {
   Serial.begin(9600);
  pinMode(piezo, OUTPUT);
  pinMode(photoresistor, INPUT); }

void loop() {
  
     photovalue = analogRead(photoresistor);
     Serial.println(photovalue);
  
      if (photovalue > 300) {
        
        digitalWrite(piezo, HIGH); 
        }

     else { digitalWrite(piezo, LOW); }
   }
