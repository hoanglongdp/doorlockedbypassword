#define _Keypad_h_
#include <math.h>//chen thu vien toan
#use delay(clock=20000000)

void control(char TenCot, int1 TrangThai);
void keypad_init(void);
char scan(void);
//khai bao ket noi cac cot
#define COT_1     PIN_D0
#define COT_2     PIN_D1
#define COT_3     PIN_D2
#define COT_4     PIN_D3

//khai bao ket noi cac hang
#define HANG_1    input(PIN_D4) 
#define HANG_2    input(PIN_D5)
#define HANG_3    input(PIN_D6)
#define HANG_4    input(PIN_D7)

char PhimNhan[16]=
               {
                  'D','C','B','A', 
                  '#','9','6','3',
                  '0','8','5','2',
                  '*','7','4','1'
               };
               

void control(char TenCot, int1 TrangThai)
{
   switch(TenCot)
   {
      case 1://cot 1
      {
         output_bit(COT_1,TrangThai);
         break;
      }
      case 2://cot 2
      {
         output_bit(COT_2,TrangThai);
         break;
      }
      case 3://cot 3
      {
         output_bit(COT_3,TrangThai);
         break;
      }
      case 4://cot 4
      {
         output_bit(COT_4,TrangThai);
         break;
      }      
   }
}

void keypad_init(void)
{
   char i;
   
   for(i=1;i<=4;i++)
   {
      control(i,0);//bat het cac cot len
   }
}

char scan(void)
{
   char Key=0;
   
   //quet cot 1
   control(1,1);//tat cot 1 di
   if(HANG_1==1)
   {
      Key=1;
   }
   if(HANG_2==1)
   {
      Key=2;
   }
   if(HANG_3==1)
   {
      Key=3;
   }
   if(HANG_4==1)
   {
      Key=4;
   }   
   control(1,0);//bat cot 1 len
   
   //quet cot 2
   control(2,1);//tat cot 2 di
   if(HANG_1==1)
   {
      Key=5;
   }
   if(HANG_2==1)
   {
      Key=6;
   }
   if(HANG_3==1)
   {
      Key=7;
   }
   if(HANG_4==1)
   {
      Key=8;
   }   
   control(2,0);//bat cot 2 len
   
   //quet cot 3
   control(3,1);//tat cot 3 di
   if(HANG_1==1)
   {
      Key=9;
   }
   if(HANG_2==1)
   {
      Key=10;
   }
   if(HANG_3==1)
   {
      Key=11;
   }
   if(HANG_4==1)
   {
      Key=12;
   }   
   control(3,0);//bat cot 3 len
   
   //quet cot 4
   control(4,1);//tat cot 4 di
   if(HANG_1==1)
   {
      Key=13;
   }
   if(HANG_2==1)
   {
      Key=14;
   }
   if(HANG_3==1)
   {
      Key=15;
   }
   if(HANG_4==1)
   {
      Key=16;
   }   
   control(4,0);//bat cot 4 len
   
   return Key;//tra gia tri phim ve cho ham quet phim
}

