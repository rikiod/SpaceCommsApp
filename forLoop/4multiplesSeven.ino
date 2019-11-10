int multiple = 0;

int stage = 0;

int counter;

void setup()
{
  Serial.begin(9600);

}

void loop()
{
  stage = 1;
  for (counter = 0; counter < 100; ++counter) {
    multiple = (7 * stage);
    Serial.println(multiple);
    stage = (stage + 1);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
