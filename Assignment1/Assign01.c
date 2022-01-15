/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

// function for NAND operation
bool NAND(bool x,bool y){
    bool z=!(x && y);
    return z;
}
unsigned char sop(A,B,C)
{
    unsigned char F;
    F = (B&C)|((!B)&(!C));
    return F;
}
int main(){
    unsigned char X;
    unsigned char G; //output
    unsigned char one = 0x01;//used for displaying the output in bit
    unsigned char  A=0x00,B=0x01,C=0x00; //inputs in hex
    G=sop(A,B,C);
    printf("%x%x%x",one&A,one&B,one&C);
    printf(" ");
    printf("%x\n" ,one&G);
  //Implementation of POS using NAND gate
    X=NAND(NAND(B,C),NAND((!B),(!C)));
   printf("OUTPUT:%d",X);

return 0;

}
