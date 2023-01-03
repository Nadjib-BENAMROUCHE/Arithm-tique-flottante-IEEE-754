#pragma once 

//La bibloitheque pour la fonction de la representation de IEEE_754 et la structure UNION 

typedef union {
 
    float f;
    struct
    {
 
        
        unsigned int man : 23;
        unsigned int expos : 8;
        unsigned int sign : 1;
 
    } raw;
} the_float;
 
void printIEEE(the_float var);
void printBinary(int n, int i);

