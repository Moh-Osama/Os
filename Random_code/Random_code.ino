int pin = 10;
int value = 200;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

if (Serial.available())
{
value= Serial.read();
analogWrite(pin, value);
}


} 

