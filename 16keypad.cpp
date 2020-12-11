#include "mbed.h" 
BusOut Disp1 (PTC6,PTC5,PTC16,PTA16,PTA17,PTC10,PTC11,PTC13);
//ABCDEFGdp
DigitalOut vdd1(PTC17);

DigitalIn row1 (PTE4);
DigitalIn row2 (PTE3);
DigitalIn row3 (PTE2);
DigitalIn row4 (PTB11);

DitalOut col1 (PTB10);
DitalOut col2 (PTB9);
DitalOut col3 (PTB8);
DitalOut Col4 (PTE5);

void setvoid (){
    vdd1= 1;
    }

int loop = 10;  

void  setcolhigh () {  
    col1 = 1;
    col2 = 1;
    col3 = 1;
    col4 = 1;
    }

void  setcol1 () {  
    col1 = 0;
    col2 = 1;
    col3 = 1;
    col4 = 1;
    }

void  setcol2 () {  
    col1 = 1;
    col2 = 0;
    col3 = 1;
    col4 = 1;
    }

void  setcol3 () {  
    col1 = 1;
    col2 = 1;
    col3 = 0;
    col4 = 1;
    }

void  setcol4 () {  
    col1 = 1;
    col2 = 1;
    col3 = 1;
    col4 = 0;
    }

void key_1 () {
    Disp1 = 0xf9;
    }
    
void key_2 () {
    Disp1 = 0xA4;
    }

void key_3 () {
    Disp1 = 0xB0;
    }
    
void key_4 () {
    Disp1 = 0x99;
    }
void key_5 () {
    Disp1 = 0x92;
    }

void key_6 () {
    Disp1 = 0x82;
    }
void key_7 () {
    Disp1 = 0xF8;
    }
void key_8 () {
    Disp1 = 0x80;
    }
    
void key_9 () {
    Disp1 = 0x90;

void key_A () {
    Disp1 = 0x77;
    
void key_b () {
    Disp1 = 0x1F;
    
void key_C () {
    Disp1 = 0x4E;
    
void key_d () {
    Disp1 = 0x3D;
    
void key_nope () {
    Disp1 = 0x3F;
    
//keyscan  function routine

void keyscan (){
    setcolhigh();
    wait(0.2);
    setcol1();
    wait(0.2);
    if (row1 == 0)
    key_1();
    if (row2 == 0)
    key_4 ();
    if (row3 == 0)
    key_7();
    if (row_4 == 0)
    key_nope;
    }
    // keyscan col
    wait(0.1);
    setcol2 ();
    wait (0.2);
    if (row1 == 0)
    key_2();
    if (row2 == 0 )
    key_5 ();
    if (row3 == 0)
    key_8 ();
    if (row4 == 0)
    key_0 ();
    
    wait (0.1);
    setcol3 ();
    wait (0.2);
    if (row1 == 0)
    key_3();
    if (row2 == 0 )
    key_6 ();
    if (row3 == 0)
    key_9 ();
    if (row4 == 0)
    key_# ();
    
    wait(0.1);
    setcol4();
    wait (0.2);
     if (row1 == 0)
    key_A();
    if (row2 == 0 )
    key_B ();
    if (row3 == 0)
    key_C ();
    if (row4 == 0)
    key_d ();
    
    
   
    

    
int main()
{
  while (1) {
    setvdd();
    keyscan(); // run keyscan function
    wait(0.2);
    }  
    
    
    
    
}
