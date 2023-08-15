/*
Author: Adarsh Rao
Purpose : Chaalenge of control flow udemy
Date : 13th June,2023

Weekly Pay of person
1.Ask weekly hours
2.Give grosspay,tax,netpay
3.Overtime above 40hrs


*/

#include<stdio.h>

int main()
{
    float hours=0,hours_rate=0,overtime_pay=0,overtime_hours=0,regular_pay=0,total_tax=0,net_pay_beforetax=0,net_pay_aftertax=0;
    float t1=0,t2=0,t3=0;
    int n1=0,n2=0,n3=0;


    printf("Enter number of hours that u have worked in a week\n");
    scanf("%f",&hours);

    printf("Enter the rate at which u are paid\n");
    scanf("%f",&hours_rate);

    if (hours<=40)
    {
            regular_pay= hours * hours_rate;
            overtime_hours =0;
            overtime_pay=1.5*12*overtime_hours;


    }






    if(hours>40)
    {
        overtime_hours=hours-40;
        overtime_pay= 1.5 * hours_rate * overtime_hours; 
        regular_pay=40*hours_rate;

    }

    net_pay_beforetax = regular_pay + overtime_pay;


    if (net_pay_beforetax <=300)
        {
            total_tax= net_pay_beforetax * 15/100;
        }
    else if (300<net_pay_aftertax && net_pay_aftertax<=450)
        {
            n1=300;
            t1= 300 * 15/100;
            n2= net_pay_beforetax -300;
            t2=n2 * 20/100;
            total_tax=t1+t2;

        }
    else  
        {
            t1=300*15/100;
            printf("%f\n",t1);
            t2=150*20/100;
            printf("%f\n",t2);
            n3= net_pay_beforetax-450;
            t3=n3*25/100;
            printf("%f\n",t3);
            total_tax=t1+t2+t3;
        }
    
    net_pay_aftertax =net_pay_beforetax -total_tax;

    printf("\nYou have worked for %f hours\n",hours);
    printf("\nThe hourly rate is : %f $\n",hours_rate);
    printf("\nThe regular hours pay is : %f $\n",regular_pay);
    printf("\nThe overtime pay is : %f $\n",overtime_pay);
    printf("\nThe gross pay is : %f $\n",net_pay_beforetax);
    printf("\nThe tax is : %f $\n",total_tax);
    printf("\nThe final pay after tax is : %f $\n",net_pay_aftertax);




    




}