#include<stdio.h>
#include<float.h>
#include<math.h>
#include<fenv.h>

int main() /* Program 2: First Loop Program */
{
int n = 0;
float x = 1;
 //fesetround(FE_TONEAREST);          
 //fesetround(FE_DOWNWARD);                      //Arrondi vers mois l inf
 //fesetround(FE_TOWARDZERO);                      //Arrondi vers vers 0
 fesetround(FE_UPWARD);                        //Arrondi vers plus l inf
 /* Repeatedly divide x by 2 until it underflows to 0 */
while (x > 0) {
x = x/2;
n++;
printf ("(2 raised to the power %d) = %e \n", n, x);
}


return 0;
}