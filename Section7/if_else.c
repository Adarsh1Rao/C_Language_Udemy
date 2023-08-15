#include<stdio.h>

int main()
{
    int test_number,remainder;

    printf("Enter the number u wanna testc: ");
    scanf("\n%d", &test_number);

    if(test_number%2 ==0)
    {
        printf("\nTest number %d is even",test_number);

    }
    else
    {
        printf("\nTest number %d is odd", test_number);
    }
}