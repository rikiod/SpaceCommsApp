/*
  This program prints the word "Hello" to the
  monitor 1000 times.
*/

int counter;

void setup()
{
  Serial.begin(9600);

}

void loop()
{
  for (counter = 0; counter < 1000; ++counter) {
    Serial.println("Hello");
  }
}