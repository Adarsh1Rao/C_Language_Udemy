#include<stdio.h>
//#include<stdbool.h>

int main()
{



    int i=0,j=0;
    int primes [50];
    primes[0]=2;
    primes[1]=3;
    int k=2;

    for(i=5; i<101; i+=2) 
    {
        bool A =1;
        for( j=2;j<i;j++)
        {
            if((i%j) == 0)
            {
                A=0;
                break;
            }
                 
        }
        if(A == 1)
       { primes[k]=i;
        k++;
        printf("%d\n",i);
       }
        
    }

   
}