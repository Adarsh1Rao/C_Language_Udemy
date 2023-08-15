#include<stdio.h>

extern int y; //linker error

int main()
{
    printf("hi");
    printf(y)     //doesnt know what is y when linking as exe from all object files
}