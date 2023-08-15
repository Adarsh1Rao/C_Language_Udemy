#include<stdio.h>

void multiply2nos(int a, int b)
{
    int result =a*b;
    printf("The multiplication of %d and %d is  : %d\n",a,b,result);
    return ;
}

int main(void)
{
    multiply2nos(4,8);
    multiply2nos(10,3);

   return 0;
}