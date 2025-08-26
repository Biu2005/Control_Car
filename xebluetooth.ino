#define enA 11
#define in1 13
#define in2 12
#define in3 8
#define in4 9
#define enB 10

void setup() {
  // Initialize serial communication at 9600 bits per second:
  Serial.begin(9600);

  // Set motor control pins as outputs:
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
}

void loop() {
  char received = Serial.read();

  // Control the motors based on the received character:
  switch (received) {
    case 'F':
      forward();
      break;
    case 'B':
      back();
      break;
    case 'L':
      turnLeft();
      break;
    case 'R':
      turnRight();
      break;
    case 'S':
      stop();
      break;
    case 'G':
      forwardLeft();
      break;
    case 'I':
      forwardRight();
      break;
  }
}

void forward() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enA, 120);
  analogWrite(enB, 120);
}

void back() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enA, 110);
  analogWrite(enB, 110);
}

void turnRight() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enA, 125);
  analogWrite(enB, 125);
}

void turnLeft() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enA, 125);
  analogWrite(enB, 125);
}

void stop() {
  analogWrite(enA, 0);
  analogWrite(enB, 0);
}
void forwardLeft() {
  analogWrite(enB, 130);
  analogWrite(enA, 0);
}
void forwardRight() {
  analogWrite(enB, 0);
  analogWrite(enA, 130);
}
