#include<stdio.h>


int main()
{
double W=2.56;
double H=1.11;
double Area;
double Perimeter;

Area=(W*H);
Perimeter=2*(W+H);

printf("The width is %e\n, The height is %e\n, The area is %e\n, The perimeter is %.2e\n",W,H,Area,Perimeter);
return 0;
}