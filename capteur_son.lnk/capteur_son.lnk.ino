const int led1 = 11;
const int led2 = 12;
const int led3 = 13;
const int pin_D0= 7;

// variable qui va stoker la valeur du pin A0
word analog = 0;

void setup() {
  pinMode( led1, OUTPUT);
  pinMode( led2, OUTPUT);
  pinMode( led3, OUTPUT);
  
  pinMode (pin_D0, INPUT);
  Serial.begin(9600);

}

void loop() {

// le A0 renvoie une valeur entre 0 et 1023; on recupère cette valeur
 analog = analogRead(A0);
 
 Serial.println(analog);

  if (analog > 522)
    {
      digitalWrite (led1, HIGH);
    }
    else 
    {
      digitalWrite (led1, LOW);
    }
  if (analog > 532)
    {
      digitalWrite (led2, HIGH);
    }
    else 
    {
      digitalWrite (led2, LOW);
    }
  if (analog > 542)
    {
      digitalWrite (led3, HIGH);
    }
    else 
    {
      digitalWrite (led3, LOW);
    }

 delay(10);
}
