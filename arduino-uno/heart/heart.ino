// Led
const byte led1 = 11;
const byte led2 = 12;
const byte led3 = 13;
const byte led4 = 8;
const byte led5 = 7;
const byte led6 = 6;
const byte led7 = 9;
const byte led8 = 10;

// Buttons
const byte button1 = 2;
const byte button2 = 3;
const byte button3 = 4;
const byte button4 = 5;

void setup() {
  pinMode(led1, OUTPUT); // Assigned led
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);

  pinMode(button1, INPUT_PULLUP); // Assigned buttons
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(button4, INPUT_PULLUP);

}

void loop() {
  if (digitalRead(button1) == LOW) { // Heart wave
    digitalWrite(led5, HIGH); delay(100);
    digitalWrite(led4, HIGH); digitalWrite(led6, HIGH); delay(100);
    digitalWrite(led1, HIGH); digitalWrite(led3, HIGH); digitalWrite(led7, HIGH); delay(100);
    digitalWrite(led8, HIGH); digitalWrite(led2, HIGH); delay(100);
    delay(1000);

    digitalWrite(led5, LOW); delay(100);
    digitalWrite(led4, LOW); digitalWrite(led6, LOW); delay(100);
    digitalWrite(led1, LOW); digitalWrite(led3, LOW); digitalWrite(led7, LOW); delay(100);
    digitalWrite(led8, LOW); digitalWrite(led2, LOW); delay(100);
    delay(1000);

    digitalWrite(led5, HIGH); delay(100);
    digitalWrite(led4, HIGH); digitalWrite(led6, HIGH); delay(100);
    digitalWrite(led1, HIGH); digitalWrite(led3, HIGH); digitalWrite(led7, HIGH); delay(100);
    digitalWrite(led8, HIGH); digitalWrite(led2, HIGH); delay(100);
    delay(1000);

    digitalWrite(led5, LOW); delay(100);
    digitalWrite(led4, LOW); digitalWrite(led6, LOW); delay(100);
    digitalWrite(led1, LOW); digitalWrite(led3, LOW); digitalWrite(led7, LOW); delay(100);
    digitalWrite(led8, LOW); digitalWrite(led2, LOW); delay(100);
    delay(1000);

    digitalWrite(led5, HIGH); delay(100);
    digitalWrite(led4, HIGH); digitalWrite(led6, HIGH); delay(100);
    digitalWrite(led1, HIGH); digitalWrite(led3, HIGH); digitalWrite(led7, HIGH); delay(100);
    digitalWrite(led8, HIGH); digitalWrite(led2, HIGH); delay(100);
    delay(1000);

    digitalWrite(led5, LOW); delay(100);
    digitalWrite(led4, LOW); digitalWrite(led6, LOW); delay(100);
    digitalWrite(led1, LOW); digitalWrite(led3, LOW); digitalWrite(led7, LOW); delay(100);
    digitalWrite(led8, LOW); digitalWrite(led2, LOW); delay(100);
    delay(1000);
    
  } 
    
  if (digitalRead(button2) == LOW) { // Heart blinking lights
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
    delay(500);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    delay(500);
    
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
    delay(500);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    delay(500);

    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
    delay(500);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    delay(500);

    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
    delay(500);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    delay(500);

    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
    delay(500);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    delay(500);
    
  }

  if (digitalRead(button3) == LOW) { // Heart Pattern lights
      digitalWrite(led1, HIGH); delay(100);
      digitalWrite(led2, HIGH); delay(100);
      digitalWrite(led3, HIGH); delay(100);
      digitalWrite(led4, HIGH); delay(100);
      digitalWrite(led5, HIGH); delay(100);
      digitalWrite(led6, HIGH); delay(100);
      digitalWrite(led7, HIGH); delay(100);
      digitalWrite(led8, HIGH); delay(100);
      delay(1000);

      digitalWrite(led1, LOW); delay(100);
      digitalWrite(led2, LOW); delay(100);
      digitalWrite(led3, LOW); delay(100);
      digitalWrite(led4, LOW); delay(100);
      digitalWrite(led5, LOW); delay(100);
      digitalWrite(led6, LOW); delay(100);
      digitalWrite(led7, LOW); delay(100);
      digitalWrite(led8, LOW); delay(100);
      delay(1000);

      digitalWrite(led1, HIGH); delay(100);
      digitalWrite(led2, HIGH); delay(100);
      digitalWrite(led3, HIGH); delay(100);
      digitalWrite(led4, HIGH); delay(100);
      digitalWrite(led5, HIGH); delay(100);
      digitalWrite(led6, HIGH); delay(100);
      digitalWrite(led7, HIGH); delay(100);
      digitalWrite(led8, HIGH); delay(100);
      delay(1000);

      digitalWrite(led1, LOW); delay(100);
      digitalWrite(led2, LOW); delay(100);
      digitalWrite(led3, LOW); delay(100);
      digitalWrite(led4, LOW); delay(100);
      digitalWrite(led5, LOW); delay(100);
      digitalWrite(led6, LOW); delay(100);
      digitalWrite(led7, LOW); delay(100);
      digitalWrite(led8, LOW); delay(100);
      delay(1000);

      digitalWrite(led1, HIGH); delay(100);
      digitalWrite(led2, HIGH); delay(100);
      digitalWrite(led3, HIGH); delay(100);
      digitalWrite(led4, HIGH); delay(100);
      digitalWrite(led5, HIGH); delay(100);
      digitalWrite(led6, HIGH); delay(100);
      digitalWrite(led7, HIGH); delay(100);
      digitalWrite(led8, HIGH); delay(100);
      delay(1000);

      digitalWrite(led1, LOW); delay(100);
      digitalWrite(led2, LOW); delay(100);
      digitalWrite(led3, LOW); delay(100);
      digitalWrite(led4, LOW); delay(100);
      digitalWrite(led5, LOW); delay(100);
      digitalWrite(led6, LOW); delay(100);
      digitalWrite(led7, LOW); delay(100);
      digitalWrite(led8, LOW); delay(100);
      delay(1000);
      
  }

  if (digitalRead(button4) == LOW) { // Heart disco lights
    digitalWrite(led5, HIGH); digitalWrite(led1, HIGH); digitalWrite(led3, HIGH); digitalWrite(led7, HIGH); delay(100);
    digitalWrite(led5, LOW); digitalWrite(led1, LOW); digitalWrite(led3, LOW); digitalWrite(led7, LOW); delay(100);

    digitalWrite(led2, HIGH); digitalWrite(led4, HIGH); digitalWrite(led6, HIGH); digitalWrite(led8, HIGH); delay(100);
    digitalWrite(led2, LOW); digitalWrite(led4, LOW); digitalWrite(led6, LOW); digitalWrite(led8, LOW); delay(100);

    digitalWrite(led5, HIGH); digitalWrite(led1, HIGH); digitalWrite(led3, HIGH); digitalWrite(led7, HIGH); delay(100);
    digitalWrite(led5, LOW); digitalWrite(led1, LOW); digitalWrite(led3, LOW); digitalWrite(led7, LOW); delay(100);

    digitalWrite(led2, HIGH); digitalWrite(led4, HIGH); digitalWrite(led6, HIGH); digitalWrite(led8, HIGH); delay(100);
    digitalWrite(led2, LOW); digitalWrite(led4, LOW); digitalWrite(led6, LOW); digitalWrite(led8, LOW); delay(100);
    
    digitalWrite(led5, HIGH); digitalWrite(led1, HIGH); digitalWrite(led3, HIGH); digitalWrite(led7, HIGH); delay(100);
    digitalWrite(led5, LOW); digitalWrite(led1, LOW); digitalWrite(led3, LOW); digitalWrite(led7, LOW); delay(100);

    digitalWrite(led2, HIGH); digitalWrite(led4, HIGH); digitalWrite(led6, HIGH); digitalWrite(led8, HIGH); delay(100);
    digitalWrite(led2, LOW); digitalWrite(led4, LOW); digitalWrite(led6, LOW); digitalWrite(led8, LOW); delay(100);

    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
    delay(100);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    delay(100);

    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
    delay(100);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    delay(100);

    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
    delay(100);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    delay(100);
    
  }
}