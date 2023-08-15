#include <stdio.h>

int main()
{

    int intVar = 11;
    float floatVar = 332.222228989;
    double doubleVar = 2.55e+10;
    _Bool boolVar = 0;
    char charVar = 'a';

    printf("The value of intVar is %d", intVar); //%d or %i can be used
    printf("\nThe value of floatVar is %f", floatVar);
    printf("\nThe value of double is %e", doubleVar);
    printf("\nThe value of char  is %c", charVar);
    printf("\nThe value of bool is %i", boolVar);

    printf("%.3f",floatVar); //width operator...for precison .3 means 3 decimal precison..it will roundoff
}