#include<stdio.h>

int main()
{
    float value1,value2;
    char operator;

    printf ("Enter your expression \n");
    scanf("%f %c %f", &value1,&operator,&value2);

    switch(operator) 
    {
        case '+' :
        printf("The output is %.2f\n",value1 + value2);
        break;

        case '-':
        printf("The output is %.2f\n",value1-value2);
        break;

        case '*':
        printf("The result is %.2f\n",value1 * value2);
        break;

        case '/':
        if(value2==0)
        printf("Denominator iszero.Division not defined.");
        else
        printf("The result is %.2f\n", value1/value2);
    }

}