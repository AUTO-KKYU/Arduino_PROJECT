int nowFloor = 1;
int called = 0;
int mode = 0;

const int LED_PINS[] = {2, 3, 4, 5, 6, 7, 8};
const int BUTTON_PINS[] = {A2, A1, A0};
const int LED_FLOOR[] = {9, 10, 11};
int lightIndex = 0;

void setup() {
  for (int i = 0; i < sizeof(LED_PINS); i++)
  {
    pinMode(i, OUTPUT);
  }
  for (int i = 0; i < sizeof(LED_FLOOR); i++) 
  {
    pinMode(i, OUTPUT);
  }
  for (int i = 0; i < sizeof(BUTTON_PINS); i++)
  {
    pinMode(i, INPUT);
  }

  Serial.begin(9600);
  digitalWrite(LED_PINS[lightIndex], HIGH);
  Serial.println("대기중입니다.");
}

void ButtonState() {
  for (int i = 0; i < 3; i++) {
    if (digitalRead(BUTTON_PINS[i]) == HIGH) {
      called = 1;
      digitalWrite(LED_FLOOR[i], HIGH);
    }
  }
}

void move(int direction) {
  digitalWrite(LED_PINS[lightIndex], LOW);
  lightIndex += direction;
  delay(200);
  digitalWrite(LED_PINS[lightIndex], HIGH);
  delay(200);

  if (lightIndex % 3 == 0) {
	if (direction == 1) 
    {
       nowFloor += 1;
    } 
    else 
    {
       nowFloor -= 1;
    }    
    Serial.print("현재 층: ");
    Serial.println(nowFloor);
  }
}

void go(int destination) {
  if (destination > nowFloor)
  {
    mode = 0;
  } 
  else 
  {
    mode = 1;
  }
  
  while (nowFloor != destination) 
  {
    if (mode == 0)
    {
        move(1);
    } 
    else 
    {
        move(-1);
    }
}

}

void moveNearest() {
    while (lightIndex % 3 != 0) 
    {
        if (mode == 0)
        {
            move(1);
        } else 
        {
            move(-1);
        }
    }
}

void loop() {
  ButtonState();
  if (called == 1) 
  {
    for (int i = 0; i < 3; i++) {
      if (digitalRead(BUTTON_PINS[i]) == HIGH) {
        go(i + 1);
        digitalWrite(LED_FLOOR[i], LOW);
      }
    }
    called = 0;
  }
  else 
  {
    moveNearest();
  }
}