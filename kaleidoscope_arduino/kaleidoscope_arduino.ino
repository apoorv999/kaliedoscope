#define R1 2    //x
#define G1 3    //y
#define B1 4    //z
#define R2 5    //y
#define G2 6    //x
#define B2 7    //z
#define R3 11   //x
#define G3 12   //z
#define B3 16   //y
#define R4 17   //z
#define G4 18   //y
#define B4 19   //x

void setup() {
  // put your setup code here, to run once:
pinMode(8,INPUT);
pinMode(9,INPUT);
pinMode(10,INPUT); 

 pinMode(R1,OUTPUT);
  pinMode(B1,OUTPUT);
   pinMode(G1,OUTPUT);
    pinMode(R2,OUTPUT);
     pinMode(B2,OUTPUT); 
     pinMode(G2,OUTPUT);
      pinMode(R3,OUTPUT);
       pinMode(B3,OUTPUT);
        pinMode(G3,OUTPUT);
         pinMode(R4,OUTPUT);
          pinMode(B4,OUTPUT);
           pinMode(G4,OUTPUT);
for (int i=2;i<=19;i++){
  if(i!=8&&i!=9&&i!=10&&i!=13&&i!=14&&i!=15){
  digitalWrite(i,HIGH);
  delay(1000);
  digitalWrite(i,LOW);}
}
}

void loop() {
  // put your main code here, to run repeatedly:

//000
//001
//010
//011
//100
//101
//110
//111
if (digitalRead(8)){
  digitalWrite(R1,HIGH);
  digitalWrite(G2,HIGH);
  digitalWrite(R3,HIGH);
  digitalWrite(B4,HIGH);
}
else{
  digitalWrite(R1,LOW);
  digitalWrite(G2,LOW);
  digitalWrite(R3,LOW);
  digitalWrite(B4,LOW);
}


if (digitalRead(9)){
  digitalWrite(B1,HIGH);
  digitalWrite(B2,HIGH);
  digitalWrite(G3,HIGH);
  digitalWrite(R4,HIGH);
}
else{
  digitalWrite(B1,LOW);
  digitalWrite(B2,LOW);
  digitalWrite(G3,LOW);
  digitalWrite(R4,LOW);
}

if (digitalRead(10)){
  digitalWrite(G1,HIGH);
  digitalWrite(R2,HIGH);
  digitalWrite(B3,HIGH);
  digitalWrite(G4,HIGH);
}
else{
  digitalWrite(G1,LOW);
  digitalWrite(R2,LOW);
  digitalWrite(B3,LOW);
  digitalWrite(G4,LOW);
}
}
