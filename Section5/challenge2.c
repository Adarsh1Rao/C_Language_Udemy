/*

Author : Adarsh Rao
Date : 6th June, 2023
Purpose : The aim of this program is to print perimeter and area of rectangle

*/

#include<stdio.h>

int main()
{
    double W=0.00,H=0.00;
    double Area=0.00, Perimeter=0.00;

    printf("Enter the width of rectangle\n");
    scanf("%lf",&W);                      // %lf is the format specifier for double and %Lf for long double

    printf("Enter the height of rectangle\n");
    scanf("%lf",&H);

    Area = W*H;
    Perimeter=2*(W+H);

    printf("The Width of rectangle  is :%lf\n", W);
    printf("The Height of rectangle  is : %lf\n", H);
    printf("Area of rectangle is : %lf\n", Area);
    printf("Perimeter of rectangle is : %lf\n", Perimeter);    
}