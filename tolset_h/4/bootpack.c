1 void io_hlt(void);
  2 void write_mem8(int addr, int data);
  3
  4 void HariMain(void){
  5     int i;
  6     for(i=0xa0000;i<=0xaffff){
  7         write_mem8(i,15);
  8     }
  9     for(;;){
 10         io_hlt();
 11     }
 12 }
