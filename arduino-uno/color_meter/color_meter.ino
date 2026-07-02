unsigned long startTime = 0;
unsigned long currentTime = 0;
bool isButtonPressed = false;

void setup() {
  pinMode(8, OUTPUT);  // GREEN
  pinMode(9, OUTPUT);  // GREEN
  pinMode(10, OUTPUT); // YELLOW
  pinMode(11, OUTPUT); // YELLOW
  pinMode(12, OUTPUT); // RED
  pinMode(13, OUTPUT); // RED
  pinMode(2, INPUT_PULLUP); // BUTTON
}

void loop() {
  if (digitalRead(2) == LOW && isButtonPressed == false) { // PRESSED
    startTime = millis(); // Register start time when button is pressed
    isButtonPressed = true;
  }

  currentTime = millis(); // Continueosly count registered time

  if (isButtonPressed == true && (currentTime - startTime >= 100)) { // TURN ON
    digitalWrite(8, HIGH);  delay(50); // GREEN
    digitalWrite(9, HIGH);  delay(50); // GREEN
    digitalWrite(10, HIGH); delay(50); // YELLOW
    digitalWrite(11, HIGH); delay(50); // YELLOW
    digitalWrite(12, HIGH); delay(50); // RED
    digitalWrite(13, HIGH); // RED
  }

  if (digitalRead(2) == HIGH && isButtonPressed == true && (currentTime - startTime > 50)) { // TURN OFF 
    digitalWrite(13, LOW); delay(50); // GREEN
    digitalWrite(12, LOW); delay(50); // GREEN
    digitalWrite(11, LOW); delay(50); // YELLOW
    digitalWrite(10, LOW); delay(50); // YELLOW
    digitalWrite(9, LOW);  delay(50); // RED
    digitalWrite(8, LOW); // RED
  
    isButtonPressed = false;
  }
}