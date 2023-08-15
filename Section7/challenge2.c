#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    time_t t;

    srand((unsigned)time(&t));
    int randomNum =rand() % 21;
    printf("%d\n",randomNum);
   

    int tries =1,guess=0;

    while(tries<6)
    {
        if(tries==1)
        {
        printf(" lets start the game!!\t Whats ur guess ? \n");
        }

        
        scanf("%d",&guess);
        if(guess<0 || guess>20)
        {
            printf("Guess must be between 1 to 20\n");
            printf("START AGAIN\n");
            break;
        }
        else
        {
            

            if(guess == randomNum)
            {
                printf("Hurray, You won!!\n");
                break;
            }
            else
            {
                printf("Wrong guess!!!\n");
               

                if(guess > randomNum)
                {
                    printf("The guess was larger than actual number\n");
                }
                else
                {
                    printf("The guess was smaller than actual number\n");
                    
                }
                printf("You are left with %d trials\n",5-tries);
                tries++;
                
            }
            

        }


    }



}