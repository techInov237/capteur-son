const int led = 11;
const int pin_D0= 7;

int message = 0;

void setup() {
  pinMode( led, OUTPUT);
  pinMode (pin_D0, INPUT);
  Serial.begin(9600);

}

void loop() {

 message = digitalRead(pin_D0);

  if (message == HIGH)
    {
      digitalWrite (led, LOW);
      Serial.println(message);
    }
    else 
    {
      digitalWrite (led, HIGH);
      Serial.println(message);
    }

 delay(100);
}
