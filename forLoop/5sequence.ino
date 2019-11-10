int number = 0;

int counter;

void setup()
{
  Serial.begin(9600);

}

void loop()
{
  number = 0;
  for (counter = 0; counter < 1000; ++counter) {
    Serial.print(number);
    number = (number + 1);
    if (number == 7) {
      number = 0;
    }
  }
  delay(10); // Delay a little bit to improve simulation performance
}
