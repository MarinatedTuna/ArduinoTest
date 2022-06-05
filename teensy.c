int led0 = 0;
int led1 = 1;
int led2 = 2;
int led3 = 3;
int led4 = 4;
int led5 = 5;
int led6 = 6;
int led7 = 7;

IntervalTimer timer1;

enum States {off, on0, on1, on2, on3, on4, on5, on6, on7} state;

void tick() {
  switch(state){ //transitions
    case off:
      state = on0;
      break;
    case on0:
      state = on1;
      break;
    case on1:
      state = on2;
      break;
    case on2:
      state = on3;
      break;
    case on3:
      state = on4;
      break;
    case on4:
      state = on5;
      break;
    case on5:
      state = on6;
      break;
    case on6:
      state = on7;
      break;
    case on7:
      state = off;
    default:
      break;
  }

  switch(state) { //actions
    case off:
      digitalWrite(led0, LOW);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);      
      break;
    case on0: 
      digitalWrite(led0, HIGH);
      break;
    case on1:
      digitalWrite(led0, LOW);
      digitalWrite(led1, HIGH);
      break;
    case on2:
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      break;
    case on3:
      digitalWrite(led2, LOW);
      digitalWrite(led3, HIGH);
      break;
    case on4:
      digitalWrite(led3, LOW);
      digitalWrite(led4, HIGH);
      break;
    case on5:
      digitalWrite(led4, LOW);
      digitalWrite(led5, HIGH);
      break;
    case on6:
      digitalWrite(led5, LOW);
      digitalWrite(led6, HIGH);
      break;
    case on7:
      digitalWrite(led6, LOW);
      digitalWrite(led7, HIGH);
      break;
    default:
      break;
  }
}

void setup() {
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  
  timer1.begin(tick, 1000000);
}

void loop() {
  //function not used
  //need arduino to test this out
 }
