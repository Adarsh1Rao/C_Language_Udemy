/*
Below is the example showing declaration of enum datatype and how it is implemented


*/

// #include <stdio.h>
// #include<stdbool.h>

// int main()
// {
//     enum gender { male,female};

//     enum gender myGender=male;
//     enum gender anotherGender=female;
//     enum gender thirdGender=99;  //At backend enum acts as integer so having assigned 
//                                  //integer doesnt give an error by compiler

//     bool checkGender = (myGender==anotherGender);
//     printf("%d",checkGender);
// }

// From this end..char datatype declaration and its implemnetation will be shown

#include <stdio.h>

int main()
{

    char example='\n';
    printf("%c",example); //brings cursor to new line

    char example2='a';
    printf("%c",example2); //prints w/o any new line

}