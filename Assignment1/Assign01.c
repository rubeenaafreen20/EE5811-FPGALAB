/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
unsigned char sop(A,B,C)
{
    unsigned char F;
    F = ((~B)&(~C))|(B&C);
    return F;
}
int main(){
    unsigned char G; //output
    unsigned char one = 0x01;//used for displaying the output in bit
    unsigned char  A=0x00,B=0x00,C=0x01; //inputs in hex
    G=sop(A,B,C);
    printf("%x%x%x",one&A,one&B,one&C);
    printf(" ");
    printf("%x\n" ,one&G);
    return 0;
}