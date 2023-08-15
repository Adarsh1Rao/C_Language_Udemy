#include<stdio.h>
#define MONTHS 12

int main()
{
    int days [MONTHS]={ 28,30,[4]=19,30,[1]=28,30,31,30,31,30,31,30};
    int index;

    for(index=0;index<MONTHS;index++)
    {
    printf("The no of days in month %d is %d days\n",index+1,days[index]);
    }
    return 0;
    
}




