#include<stdio.h>
#include<math.h>
#include"ieee754.h"


// lA FONCTION MAIN POUR TESTER NOTRE LIB 
int main()
{
 
    the_float var;
    the_float x;


    //var.f = 1.0/10.0;
    printf("Donner une valeur : \n");
    scanf("%f",&x.f);
    //x = (the_float)x;
    
    //Representation de IEEE B32 
    //printf("IEEE 754 representation de %f est : \n",var.f);
    //printIEEE(var);
 
    printf("La representation IEEE 754 de %f est : \n",x.f);
    printIEEE(x);

    return 0;
}
