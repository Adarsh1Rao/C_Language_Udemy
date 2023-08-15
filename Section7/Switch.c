#include <stdio.h>

int main()
{

    enum weekday { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday,Sunday} ;
    enum weekday today =Sunday;

    switch (today)
    {

    case Monday :
        printf("Happy Monday Morning");
        break;
    case Tuesday :
        printf("Happy Tuesday Morning");
        break;
    case Wednesday :
        printf("Happy Wednesday Morning");
        break;
    case Thursday :
        printf("Happy Thursday Morning ");
    case Friday :
        printf("Happy Friday Morning");
        break;
    case Saturday :
        printf("Happy Saturday Morning");
        break ;
    case Sunday :
        printf("Happy Sunday Morning ");
        break;                           ///////break statement helps in differentiating cases, if we 
                                        //////// If we omit break statements, for a particular case value
                                        //////// it will give output of different cases.  
    default :
        printf("I dont care what day it is today");
        break;
    
    }
}