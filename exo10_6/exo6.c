#include<stdio.h>
#include<math.h>
#include<fenv.h>
#include<float.h>                                   //bibloi pour type d'arrondi 
#include"ieee754.h"


int main()
{
    int x = 1;
    x = (float)x;
    float z,y;
    //fesetround(FE_TONEAREST);                       //Par default  app
    fesetround(FE_DOWNWARD);                      //Arrondi vers mois l inf
    //fesetround(FE_TOWARDZERO);                    //Arrondi vers vers 0
    //fesetround(FE_UPWARD);                        //Arrondi vers plus l inf
    z = (float)(1.00/x);
    y = (float)(1.00/z);

    for(int i=0; i<5000;i++){
        if(y == x){
            x = x+1;
            z = (float)(1.00/x);
            y = (float)(1.00/z);
            printf("Avec l'arrondi y = %e , x = %d, y de type float \n",y,x);
    
        }
    }
    //printf("La valeur de x = %d \n",x);

    return 0;


}