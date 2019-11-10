/*
  This program loops through the years from 1000
  to 2019 with the word "year" attached.
*/

int year = 0;

int counter;

void setup()
{
  Serial.begin(9600);

}

void loop()
{
  year = 999;
  for (counter = 0; counter < 1019; ++counter) {
    year += 1;
    Serial.print("Year");
    Serial.println(year);
  }
  delay(10); // Delay a little bit to improve simulation performance
}