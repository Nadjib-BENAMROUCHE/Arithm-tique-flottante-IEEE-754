#include<stdio.h>
#include<math.h>
#include"ieee754.h"

 
void printBinary(int n, int i)
{
 
    
    int k;
    for (k = i - 1; k >= 0; k--) {
 
        if ((n >> k) & 1)                   //Decalage de bits 
            printf("1");
        else
            printf("0");
    }
}
 

void printIEEE(the_float v)
{
 
    // Prints the IEEE 754 representation
    // of a float value (32 bits)
 
    printf("%d | ", v.raw.sign);
    printBinary(v.raw.expos, 8);
    printf(" | ");
    printBinary(v.raw.man, 23);
    printf("\n");
}




