#include<stdio.h>

int main()
{
    double entered_minutes;
    
    printf("Enter the number of minutes\n");
    scanf("%lf", &entered_minutes);
    printf("The minutes entered by you is : %lf\n",entered_minutes);

    double minutes_in_days;
    minutes_in_days= entered_minutes/(24*60);

    double minutes_in_years;
    minutes_in_years=entered_minutes/(365*24*60);

    printf("The minutes enterd by you in days : %lf days\n  The minutes entered by you in years is : %lf years\n",minutes_in_days,minutes_in_years);
    return 0;




}