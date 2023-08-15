#include<stdio.h>

int main()
{


    char string1[]="Hi how are you?";
    char string2[]="I am fine, how abt u?";

    int count1=0;
    int count2=0;

    while(string1[count1]!='\0')
    {
        count1=count1+1;
    }

    printf("The no of characters in %s is %d\n", string1,count1);

    
    while(string2[count2]!='\0')
    {
        count2=count2+1;
    }

    printf("The no of characters in %s is %d\n", string2,count2);


}