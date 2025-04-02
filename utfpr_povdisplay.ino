//Nome: Gabriel Zarpellon Portela
#define LED1 7
#define LED2 8 
#define LED3 9
#define LED4 10
#define LED5 11
#define LED6 12
#define LED7 13
#define LED8 A0
#define LED9 A1
#define LED10 A5
#define Hall 2


int UTFPR [8] [44] ={
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,1,1,1,1,0,0,0,1,1,1,1,0,0,0,1,1,1,0,0,0,0,1,1,1,0,0,0,0},
  {0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0},
  {0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0},
  {0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,1,1,1,0,0,0,0,1,1,1,0,0,0,0},
  {0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1,0,0,0},
  {0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};

void setup() {
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);
pinMode(LED5, OUTPUT);
pinMode(LED6, OUTPUT);
pinMode(LED7, OUTPUT);
pinMode(LED8, OUTPUT);
pinMode(LED9, OUTPUT);
pinMode(LED10, OUTPUT);
pinMode(Hall, INPUT);
}

void LightColumn(int L1, int L2 ,int L3, int L4 ,int L5, int L6 ,int L7, int L8 ,int L9, int L10){
  digitalWrite(LED1,L1);
  digitalWrite(LED2,L2);
  digitalWrite(LED3,L3);
  digitalWrite(LED4,L4);
  digitalWrite(LED5,L5);
  digitalWrite(LED6,L6);
  digitalWrite(LED7,L7);
  digitalWrite(LED8,L8);
  digitalWrite(LED9,L9);
  digitalWrite(LED10,L10);
}


void loop() {

if (digitalRead(Hall)==LOW){
  for (int i=0; i<44;i++){
    LightColumn(UTFPR[0][i],UTFPR[1][i],UTFPR[2][i],UTFPR[3][i],UTFPR[4][i],UTFPR[5][i],UTFPR[6][i],UTFPR[7][i],0,0);
    delay(1);
  }
  LightColumn(0,0,0,0,0,0,0,0,0,0);

}  
}