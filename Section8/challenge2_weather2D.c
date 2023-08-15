#include<stdio.h>

int main()
{
    int i,j;
    float total_sum_1year=0.0;
    float yearly_avg=0.0;
    float total_sum_1month=0.0;
    float monthly_avg=0.0;
    float weather_data_2D[5][12]=
    {
        {1.1, 1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1},
        {1.1, 1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1},
        {1.1, 1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1},
        {1.1, 1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1},
        {1.1, 1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1 ,1.1},

    };


// THIS BELONGS FOR YEARLY AVERAGE    
    printf("Year\t\t\t\t Rainfall(In Inches)\n");
    for(j=0;j<5;j++)
    {
        total_sum_1year =0;

        for(i=0;i<12;i++)
        {
            total_sum_1year=total_sum_1year+weather_data_2D[j][i];

        }
        yearly_avg+=total_sum_1year;
        printf("%d\t\t\t\t %f \n", 2010 + j , total_sum_1year );
    }
    
    yearly_avg=yearly_avg/5;
    printf("\nThe average yearly rainfall is :%f \n",yearly_avg);

//THIS BELONGS FOR MONTHLY AVERAGE

    printf("\nMONTHLY AVG RAINFALL \n");
    printf("JAN  FEB  MAR  APR  MAY  JUN  JUL  AUG  SEP  OCT  NOV  DEC \n");

    i=0,j=0; 

    for(i=0;i<12;i++)
    {
 
        total_sum_1month=0.0;

    
        for(j=0;j<5;j++)
        {
            total_sum_1month+=weather_data_2D[j][i];
        }

        printf("%.2f ",total_sum_1month/5);
     //   monthly_avg+=total_sum_1month;
        

    }
    // monthly_avg = monthly_avg/36;
    // printf("The monthly average is : %f",monthly_avg );



}