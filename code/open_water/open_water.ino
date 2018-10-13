byte buttonPin = 4;
byte speakerPin = 0;
byte lightPin = 1;


//code is in it's preliminary stages, will add more when 
//the first board comes back
void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  pinMode(speakerPin, OUTPUT);
  pinMode(lightPin, OUTPUT);

}

void loop() {

byte currButton = digitalRead(buttonPin);



}
