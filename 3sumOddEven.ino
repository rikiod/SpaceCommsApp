/*
  This program finds the sum of all the odd
  numbers from 1 to 1000 and the sum of all the
  even numbers from 1 to 1000.
*/

int even = 0;

int odd = 0;

int sumEven = 0;

int sumOdd = 0;

int counter;

int counter2;

void setup()
{
  Serial.begin(9600);

}

void loop()
{
  even = 0;
  sumEven = 0;
  for (counter = 0; counter < 500; ++counter) {
    even += -2;
    sumEven += even;
  }
  Serial.println(sumEven);

  odd = 1;
  sumOdd = 0;
  for (counter2 = 0; counter2 < 500; ++counter2) {
    odd += -2;
    sumOdd += odd;
  }
  Serial.println(sumOdd);
  delay(10); // Delay a little bit to improve simulation performance
}