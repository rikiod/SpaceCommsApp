/*
  This program prints all the odd numbers from
  1001 to 1 in reverse.
*/

int number = 0;

int counter;

void setup()
{
  Serial.begin(9600);

}

void loop()
{
  number = 1001;
  for (counter = 0; counter < 501; ++counter) {
    Serial.println(number);
    number += -2;
  }
  delay(10); // Delay a little bit to improve simulation performance
}