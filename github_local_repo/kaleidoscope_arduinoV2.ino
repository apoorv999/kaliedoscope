#define R1 2    //x
#define G1 3    //y
#define B1 4    //z
#define R2 5    //y
#define G2 6    //x
#define B2 7    //z
#define R3 11   //x
#define G3 12   //z
#define B3 14   //y
#define R4 15   //z
#define G4 16   //y
#define B4 17   //x

#define a 2    //x
#define b 3    //y
#define c 4    //z
#define d 5    //y
#define e 6    //x
#define f 7    //z
#define g 11   //x
#define h 12   //z
#define x 16   //y
#define j 17   //z
#define k 18   //y
#define l 19   //x

char leds[]={a,b,c,d,e,f,g,h,x,j,k,l};

void alllow(void){
  for (int o=2;o<=19;o++){
  if(o!=8&&o!=9&&o!=10&&o!=13&&o!=14&&o!=15){
  digitalWrite(o,LOW);}
}
}

void newpattern(void){
  int num=random(5,11);
  alllow();
  for(int o=1;o<=num;o++){
    int z=random(1,13);
    digitalWrite(leds[z],HIGH);
  }
}

//void newpattern(int r){
//  if((r%5)==1){
//    alllow();
//      digitalWrite(R1,HIGH);
//      digitalWrite(G2,HIGH);
//      digitalWrite(B3,HIGH);
//      digitalWrite(R4,HIGH);
//  }
//
//  else if((r%5)==2){
//    alllow();
//      digitalWrite(R2,HIGH);
//      digitalWrite(G3,HIGH);
//      digitalWrite(B4,HIGH);
//      digitalWrite(G1,HIGH);    
//    
//  }
//
//   else if((r%5)==3){
//    alllow();
//      digitalWrite(R3,HIGH);
//      digitalWrite(G4,HIGH);
//      digitalWrite(B1,HIGH);
//      digitalWrite(B2,HIGH);
//   }
//     else if((r%5)==4){
//    alllow();
//      digitalWrite(G3,HIGH);
//      digitalWrite(G4,HIGH);
//      digitalWrite(B1,HIGH);
//      digitalWrite(R2,HIGH);
//   }
//   else {
//    alllow();
//      digitalWrite(R4,HIGH);
//      digitalWrite(G1,HIGH);
//      digitalWrite(B2,HIGH);
//      digitalWrite(R3,HIGH);
//   }
//  
//}

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
  delay(100);
  digitalWrite(i,LOW);}
}
}
  int statex=0;
  int statey=0;
  int statez=0;
void loop() {

 Serial.println(digitalRead(8));
if(statex!=digitalRead(8))
{
  statex=digitalRead(8);
  newpattern();
}
else if(statey!=digitalRead(9))
{
  statey=digitalRead(9);
  newpattern();
}
else if(statez!=digitalRead(10))
{
  statez=digitalRead(10);
  newpattern();
}
delay(300);
//newpattern(random(0,21));
//delay(200);
}
