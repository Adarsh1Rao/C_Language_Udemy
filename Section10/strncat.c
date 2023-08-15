#include<stdio.h>

#include<string.h>

int main(void)
{
    char str1[]="hibro";
    char str2[]="bye bro";

    strncat(str1,str2,3);
    printf("%s",str1);
    return 0;
}