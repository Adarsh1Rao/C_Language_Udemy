#include<stdio.h>

int main()

{
    // unsigned int sum=0;
    // unsigned int i;
    // unsigned int count;

    // printf("Enter the number of integers u want sum for");
    // scanf("%u",&count);

    // for(i=0; i<=count;i++)
    // {
    //     sum+=i;
    // }
    // printf("%u",sum);
    // return 0;


    //BOTH ABOVE & BELOW CODES PERFORM SAME THING AND GIVE SAME OUTPUT.
    //THIS IS JUST TO SHOW THAT FOR LOOP IS VERY FLEXIBLE.



    // unsigned int sum=0;
    // for(unsigned int i=0;i<=3;sum+=i++); //Declaring vaiable inside was not permitted so we declare it outside the for loop
    // printf("%u",sum);

    int i=3;
    int k;

    k= i++ + ++i + ++i + i++;
    printf("%d", k);

}