#include<stdio.h>

int main()
{
    int i=0,j=0;
    int primes [50]={2,3};
    int k=2;
    int count=0;

    for(int i=5; i<101; i+=2) 
    {
        count=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
            else
            {
                count=count+1;
            }
        }
        if(count==i-2)
       { primes[k]=i;
        k++;
        printf("%d\n",i);
       }

    }

       
    // printf("The list of prime numbers is : \n");

    // for(int i =0;i<k;i++)
    // {
       
    //     printf("%d\n",primes[i]);

    // }

   
}