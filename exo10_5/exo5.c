#include<stdio.h>
#include<math.h>
#include<fenv.h>
#include<float.h>                                   //bibloi pour type d'arrondi 
#include"ieee754.h"



int main()
{
    int x = 1,x1 = 0;
    x = (float)x;
    float z = 1.0;
    while (z == 1){
    //fesetround(FE_TONEAREST);                       //Par default  app
    fesetround(FE_DOWNWARD);                        //Arrondi vers mois l inf
    //fesetround(FE_TOWARDZERO);                    //Arrondi vers vers 0
    //fesetround(FE_UPWARD);                        //Arrondi vers plus l inf
    z = (float)(1.00/x);
    z = (float)(z*x);
    printf("Avec l'arrondi z = %e , x = %d, z de type float \n",z,x);
    x++;
    
    }


    printf("La valeur de x = %d \n",x);                 //Afficher la valeur de X


    double y = 1.0;

    while (y == 1){
    fesetround(FE_TONEAREST);          
    //fesetround(FE_DOWNWARD);                      //Arrondi vers mois l inf
    //fesetround(FE_TOWARDZERO);                      //Arrondi vers vers 0
    //fesetround(FE_UPWARD);                        //Arrondi vers plus l inf
    y = (double)(1.00/x1);
    y = (double)(y*x1);
    //printf("Avec l'arrondi y = %lf , x = %d, y de type double\n",y,x1);
    x1++;
    

    }

    //printf("********************************************** %lf",sin(INFINITY));s

    return 0;


}