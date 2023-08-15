#include<stdio.h>

int main()
{
    _Bool a=1;
    _Bool b=0;
    _Bool output; //All Bool operands can be either 1/0 or True/False

    output=!a;

    printf("\n%d\n",output);
    return 0;
}