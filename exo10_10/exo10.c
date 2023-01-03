#include<stdio.h>
#include<float.h>
#include<math.h>

int main(){
    float x=0.0;
    double plus_inf = INFINITY;
    double moin_inf = -INFINITY;
    printf("La valeur de Log(+0) = %f, %e \n",log(x),log(x));

    printf("La valeur de Log(+0) = %f, %e \n",log(-0.0000000000000000000001),log(-0.0000000000000000000001));

    printf("La valeur de Log(+1) = %f, %e \n",log(1.0),log(1.0));

    printf("La valeur de Log(-1) = %f, %e \n",log(-1.0),log(-1.0));

    printf("La valeur de Log(-inf) = %f, %e \n",log(moin_inf),log(moin_inf));

    printf("La valeur de Log(+inf) = %f, %e \n",log(plus_inf),log(plus_inf));
}