int forward_1=10;
int reverse_1=9;
int forward_2=8;
int reverse_2=7;
int state=0;
int flag=0;
void setup(){
  pinMode(forward_1,OUTPUT);
  pinMode(reverse_1,OUTPUT);
  pinMode(forward_2,OUTPUT);
  pinMode(reverse_2,OUTPUT);
  Serial.begin(38400);
}
void loop(){
  if(Serial.available()>0){
    state=NULL;
    state=Serial.read();
    flag=0;
    if(state=='0' or state=='F'){
      digitalWrite(forward_1,HIGH);
      digitalWrite(reverse_1,LOW);
      digitalWrite(forward_2,HIGH);
      digitalWrite(reverse_2,LOW);
      if(flag==0){
        Serial.println("Forward");
        flag=1;
      }
    }
    else if(state=='1' or state=='R'){
      digitalWrite(forward_1,LOW);
      digitalWrite(reverse_1,HIGH);
      digitalWrite(forward_2,LOW);
      digitalWrite(reverse_2,HIGH);
      if(flag==0){
        Serial.println("Reverse");
        flag=1;
      }
     }
    else if(state=='2' or state=='L'){
      digitalWrite(forward_1,HIGH);
      digitalWrite(reverse_1,LOW);
      digitalWrite(forward_2,LOW);
      digitalWrite(reverse_2,HIGH);
      if(flag==0){
        Serial.println("LEFT");
        flag=1;
        }
      }
    else if(state=='3' or state=='R'){
      digitalWrite(forward_1,LOW);
      digitalWrite(reverse_1,HIGH);
      digitalWrite(forward_2,HIGH);
      digitalWrite(reverse_2,LOW);
      if(flag==0){
        Serial.println("RIGHT");
        flag=1;
        }
      }
    else if(state=='4' or state=='S'){
      digitalWrite(forward_1,LOW);
      digitalWrite(reverse_1,LOW);
      digitalWrite(forward_2,LOW);
      digitalWrite(reverse_2,LOW);
      if(flag==0){
        Serial.println("STOP");
        flag=1;
        }
      }
  
  }
}
