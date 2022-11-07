#define _unlock_h_
#use delay(clock=20000000)
void eeprom_write_arr(unsigned int8 addr,unsigned char*arr);
void eeprom_read_arr(unsigned int8 addr, unsigned char*arr);



void eeprom_write_arr(unsigned int8 addr,unsigned char*arr)
{
   unsigned int8 i;
   for(i=0;i<6;i++){
      write_eeprom(addr,*arr);
      addr++;
      arr++;   
   }
   
}
void eeprom_read_arr(unsigned int8 addr, unsigned char*arr)
{
   unsigned int8 i;
   for(i=0;i<6;i++)
   {
      arr[i]=read_eeprom(addr+i);
   }
}
