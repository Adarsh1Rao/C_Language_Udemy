/*

Author :  Adarsh Rao
Purpose : Creating three functions in a single program and calling them to get results
Date : 19th June, 2023

*/

#include <stdio.h>
#include <math.h>

int findGCD(int x, int y);
float absolute_number(float m);
float square_root_num(float z);

int main(void)
{

    int answer1 = 0;
    int a = 0, b = 0;

    float answer2 = 0.0;
    float x = 0.0;

    float answer3 = 0.0;
    float n = 0.0;

    printf("Enter the integers for which u want to find GCD\n");
    scanf("%d %d", &a, &b);
    answer1 = findGCD(a, b);
    printf("%d\n", answer1);

    printf("Enter the number for which you want the absolute value\n");
    scanf("%f", &x);
    answer2 = absolute_number(x);
    printf("%.2f\n", answer2);

    printf("Enter a number for which u want to find square root\n");
    scanf("%f", &n);
    answer3 = square_root_num(n);
    printf("The square root is %.2f\n", answer3);

    return 0;
}

int findGCD(int x, int y)
{
    int minimum_of_two = 0;
    int i = 1;
    int GCD;

    if (x <= 0 || y <= 0)
    {
        printf("Enter Positive Integers\n");
    }

    else
    {
        if (x < y)
            minimum_of_two = x;

        else
            minimum_of_two = y;

        for (i = 1; i <= minimum_of_two; i++)
        {
            if (x % i == 0 && y % i == 0)
            {
                GCD = i;
            }
            else
            {
            }
        }

        return GCD;
    }
}

float absolute_number(float x)
{
    float abs_num = 0.0;

    if (x > 0)
    {
        abs_num = x;
    }
    else if (x < 0)
    {
        abs_num = -x;
    }
    else
    {
        abs_num = x;
    }

    return abs_num;
}

float square_root_num(float z)
{
    float sq_root = 0.0;
    float num = 0.0;
    if (z < 0)
    {
        num = absolute_number(z);
        printf("The number you entered is negative and so we find square root of its absolute value\n");
        sq_root = pow(num, 0.5);
    }
    else
    {
        sq_root = pow(z, 0.5);
    }

    return sq_root;
}