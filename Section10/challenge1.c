#include <stdio.h>



//#define check1 "haan"
//#define check2 "aaan"


int lenofstr(char s[]);
void concatenated_result(char s1[],char s2[]);
char equalstring(char check1[],char check2[]);

int main()
{
    char str[] = "";
    printf("Enter string u want to : \n");
    scanf("%s", str);
    int length = lenofstr(str);
    printf("%d", length);


    char s1[]="hi";
    char s2[]="ji";
    concatenated_result(s1,s2);
    printf("%s", s1);






    char check1[]="haan";
    char check2[]="aaan";
     char Status;


    equalstring(check1,check2);
    printf("%c",Status);

}





int lenofstr(char s[])
{
    // printf("1");
    int count = 0;
    while (s[count] != '\0')
    {
        count = count + 1;
    }
    return count;
}





void concatenated_result(char s1[],char s2[])
{


    int ilen = lenofstr(s1);

    for(int i=0;s2[i]!='\0';i++)
    {
        s1[ilen++]=s2[i];
    }
    s1[ilen]='\0';

}






char equalstring(char check11[], char check22[])
{
    char Status;
    int counter1 = 0;
    int counter2 = 0;

    for (counter1 = 0; check11[counter1] != '\0'; counter1++)
    {
        for (counter2 = 0; check22[counter2] != '\0'; counter2++)
        {
            Status = 1;
            if (check11[counter1] != check22[counter2])
            {
                Status = 0;
                break;
            }
        }
        if (Status == 0)
        {
            break;
        }
    }
    return Status;
}