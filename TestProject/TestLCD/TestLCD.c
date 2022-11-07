#include <TestLCD.h>
#include <LCD16x2.c>



void main()
{
   lcd_init(); 
   set_tris_b(0x00);
   lcd_gotoxy(1,1);
   lcd_putc(" Hello World ");
   while(TRUE)
   {
      lcd_gotoxy(1,2);
      lcd_putc(" Hello World ");

      //TODO: User Code
   }

}
