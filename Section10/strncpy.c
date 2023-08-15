#include<stdio.h>

#include<string.h>

int main()
{
    char my[]="hI BOYSSS";

    char temp[60];

    strncpy(temp, my, strlen(my));
    printf("%s",temp);

    return 0;
}