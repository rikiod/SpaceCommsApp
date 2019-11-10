int lastDigit = 0;

int round = 0;

int counter;

void setup()
{
  Serial.begin(9600);

}

void loop()
{
  round = 0;
  for (counter = 0; counter < 100; ++counter) {
    round += 1;
    lastDigit = (round % 10);
    if (lastDigit == 1) {
      Serial.print(round);
      Serial.println("st");
    } else {
      if (lastDigit == 2) {
        Serial.print(round);
        Serial.println("nd");
      } else {
        if (lastDigit == 3) {
          Serial.print(round);
          Serial.println("rd");
        } else {
          Serial.print(round);
          Serial.println("th");
        }
      }
    }
  }
  delay(10); // Delay a little bit to improve simulation performance
}