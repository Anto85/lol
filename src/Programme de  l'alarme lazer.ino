int value;
int Buzzer = 7;
int c = 0;
int d = 0;

void setup() {
  Serial.begin(9600);
  pinMode(Buzzer, OUTPUT);
}
void loop() {
 while(c < 1){
 c++;
 }
 value = analogRead(A0);
 Serial.println(value);
 delay(500);
 Serial.println(value);
 delay(500);
 Serial.println(value);
 delay(500);

 if(value > 700){
    tone(Buzzer, 400);
    delay(500);
    tone(Buzzer, 800);
    delay(500);
    tone(Buzzer, 400);
    delay(500);
    tone(Buzzer, 800);
    delay(500);
    tone(Buzzer, 400);
    delay(500);
    tone(Buzzer, 800);
    delay(500);
    noTone(Buzzer);
    d++;
  }
  }
