#include<stdio.h>

int multiply(int a, int b)
{
    int result =a*b;
    return result;
}

int main()
{
    int result;       // You must declare the variable again here because the 
                        //declaration in a function is local variable
    result=multiply(5,6);
    printf("The result is: %d ",result);

    return 0;
}