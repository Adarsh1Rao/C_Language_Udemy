#include<stdio.h>

int main()
{

    int number_test;

    printf("Enter the number u wanna test");
    scanf("%i", &number_test);

    if(number_test<0)
    printf("Sign of number is -ve");
    else if (number_test==0)
    printf("Number has no sign. It is zero");
    else 
    printf("Number is positive");

    return 0;
}