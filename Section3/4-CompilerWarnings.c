#include<stdio.h>

int main()
{

    int total,unused;
    printf("Totai amt is: %d",total);  //here i have used variable without initialising by 
                                       //warning..bcoz value might be garbage
    return 0;

    printf("Hello World");        //it might result into a warning by
                                  // compliler where it says unused variable is not used in the code

}


