#include<stdio.h>

int main()
{
    int i=0;
    int count=10;
    long sum=0;
    int grades[10];
    float average=0;

    printf("Enter the grades\n");

    for(i=0;i<count;i++)
    {
        printf("%u> ",i+1);
        scanf("%d>",&grades[i]);
        sum+=grades[i];


    }
    average =(float)sum/count;

    printf("avg of first 10 grades is : %.2f \n", average);
}