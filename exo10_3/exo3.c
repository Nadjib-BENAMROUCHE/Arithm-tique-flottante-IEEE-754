#include<stdio.h>
#include<float.h>
#include<math.h>

int main(){
    int i = 0, p = FLT_MANT_DIG/2;                  
    float x;
    x = 1.0/10.0;
    printf("La valeur de x = %f \n",x);
    printf("Epsion machine %e \n",FLT_EPSILON);                //Le epsilon machine 
    printf("Le plus petit flottant possitif normaliser  = %e\n",FLT_MIN);

    while (x > FLT_MIN)                                        //On peux utiliser la fonction isnormal(x) --> return un boolean 1 si x est normaliser sinon 0;
    {
        x = x/2;
        i++;
        printf("x = %12.8f ,i = %d \nAvec l'ecriture rationnel en notation scientifique de x = %e \n",x,i,x);    
    }
    x=x/2;                                                      //On a ajouter une iteration pour obtenir le premier nombre denormaliser 


    //Precision = #nbr de bits de la mantisse
    printf("************************** Avec precision *****************************\n"); 

    while (x > 0 && p != 0){                                    //Continuez à diviser par 2 jusqu'à ce qu'on obtiens la moitié de la précision

        x = x/2;
        p--;
        //printf(" x = %e\n",x);
        i++;
    }
    //float y;
    //y = x*pow(2,i+1);                                         //La on obtiens pas les memes resultats 
    for(int j=0;j<i+1;j++){
        x = x*2;                                                
    }

    printf("La valeur apres multuplication x = %f \nAvec l'ecriture rationnel en notation scientifique de x = %e \n",x,x);


    return 0;
}