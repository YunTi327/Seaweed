int DP = 8;
int LP = 9;
int CP = 10;
byte data[8][8] = {
  {31,33,64,32,31,2,136,120},
  {28,34,64,32,30,4,68,56},
  {24,36,32,16,8,4,36,24},
  {0,24,36,16,8,36,24,0},
  {0,24,36,16,8,36,24,0},
  {24,36,32,16,8,4,36,24},
  {28,34,64,32,30,4,68,56},
  {31,33,64,32,31,2,136,120} 
};
int change[8][8];

void setup()
{
  pinMode(DP,OUTPUT);
  pinMode(CP,OUTPUT);
  pinMode(LP,OUTPUT);
  Serial.begin(9600);
}
byte num = 0;
void loop()
{
  digitalWrite(LP,LOW);
    
      shiftOut(DP,CP,MSBFIRST,num);
    
    digitalWrite(LP,HIGH);
    num++;
    if(num == 255){num = 0;}
    
    delay(100);
  
}

void draw(){
  
    digitalWrite(LP,LOW);
    
      shiftOut(DP,CP,MSBFIRST,64);
    
    digitalWrite(LP,HIGH);
    
    delay(1000);
  
}
