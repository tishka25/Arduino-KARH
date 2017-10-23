int dig3=0;
int dig2=0;
int dig1=0;
int select;
int pick=0;
int computer;
const int a=9;
const int b=7;
const int c=12;
const int d=6;
const int e=10;
const int f=5;
const int g=4;
const int power1=13;
const int power2=11;
const int power3=8;
int timer=0;
int timer2=0;
const int button1=14;
const int button2=19;
int b1state=0;
int b2state=0;
int deshifrator(int);
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(14, INPUT);
  pinMode(18, INPUT);
}

void loop() { 
    digitalWrite(power1, HIGH);
    dig1=deshifrator(dig1);
    delay(5);
    dig2=deshifrator(dig2);
    digitalWrite(power1, LOW);
    digitalWrite(power2, HIGH);
    delay(5);
    dig3=deshifrator(dig3);
    digitalWrite(power2, LOW);
    digitalWrite(power3, HIGH);
    delay(5);
    digitalWrite(power3, LOW);
    b1state=digitalRead(button1);
    b2state=digitalRead(button2);
    if(timer2<60){
      if(pick==1)timer2++;
    }
    else{
      pick=0;
      timer2=0;
      randomSeed(analogRead(3));
      computer = random(0, 3);
   }
    if(timer<10){
      timer++;
    }
    else{
      if(b1state==HIGH)select++;
      if(b2state==HIGH)pick=1;
      if(select>2)select=0;
      if(select<0)select=2;
      timer=0;
   }
   if(pick==0){
     if(select==0){
       dig1=10;
       dig2=11;
       dig3=12;
     }
     else if(select==1){
       dig1=13;
       dig2=13;
       dig3=10;
     }
     else if(select==2){
       dig1=5;
       dig2=12;
       dig3=10;
     }
   }
   else{
    if(select==0){
      if(computer==0){
        dig1=19;
        dig2=16;
        dig3=19;
      }
      if(computer==1){
        dig1=14;
        dig2=18;
        dig3=15;
      }
      if(computer==2){
        dig1=14;
        dig2=17;
        dig3=15;
      }
     }
     else  if(select==1){
      if(computer==1){
        dig1=19;
        dig2=16;
        dig3=19;
      }
      if(computer==2){
        dig1=14;
        dig2=17;
        dig3=15;
      }
      if(computer==0){
        dig1=14;
        dig2=18;
        dig3=15;
      }
     }
     else if(select==2){
      if(computer==2){
        dig1=19;
        dig2=16;
        dig3=19;
      }
      if(computer==1){
        dig1=14;
        dig2=18;
        dig3=15;
      }
      if(computer==0){
        dig1=14;
        dig2=17;
        dig3=15;
      }
     }
   }
}
int deshifrator(int i){
switch(i){
    case 0:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
      break;
    case 1:
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
    break;
    case 2:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, LOW);
      break;
    case 3:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, LOW);
      break;
    case 4:
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      break;
    case 5:
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      break;
    case 6:
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      break;
    case 7:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      break;
    case 8:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      break;
    case 9:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      break;
    case 10: //r
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
      break;
    case 11: //o
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      break;
    case 12: //c
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      break;
    case 13: //p
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      break;
    case 14: //->|
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      break;
    case 15: //|<-
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
      break;
    case 16: //=
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, LOW);
      break;
    case 17: //u
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      break;
    case 18: //n
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, LOW);
      break;
    case 19: //off
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      break;
    default:
      i=0;
      break;
    }
    return i;
}


