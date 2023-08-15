#include<stdio.h>

#define MONTHS 12

int main()
{
    int days[MONTHS] ={31,28,31,30,31,30,31,30,31,30,31,30}; //here we are also initialising an array..
    //curly braces and seperated by commas
    int index;

    for(index=0;index<MONTHS;index++)

    {
        printf("Month %d has %d days \n", index+1,days[index]);
    }
}