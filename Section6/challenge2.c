#include<stdio.h>

int main()
{
    
   int result1=sizeof(int);
   int result2=sizeof(float);
   int result3=sizeof(double);
   int result4=sizeof(long double);
   int result5=sizeof(char);
   int result6=sizeof(5+9);


   printf("\n%d \n%d \n%d \n%1d \n%d \n%d", result1,result2,result3,result4,result5,result6);


}