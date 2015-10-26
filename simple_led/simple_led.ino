const int sensor = 8;
const int output = 3;


void setup() {
  pinMode(sensor, INPUT);
  pinMode(output, OUTPUT);
}

void loop() {
  digitalWrite(output, HIGH);
  delay(1000);
  digitalWrite(output, LOW);
  delay(1000);
}
