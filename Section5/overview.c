/*
Author: Adarsh Rao
Purpose: Understanding variables and types of variables
Date: 6th June,2023


TYPES OF DATA : 1] Variable
                2] Constants
Variable are types of data that can be used anywhere and changed

Constants are fixed types of data

Variable is a way in which we give name to a memory location and we use that location in our 
program as per our choice. Data type specifies the type of variable we want to have..It also corresponds 
to number of memory bytes we want to reserve. So as per requirement we use different data types,
eg. INT FLOAT STRING etc

Assigning a variable means giving a value,it can be done at the time of declaring as well
= is used for assigning a value and , is used for declaring multiple variable at 
same time of same datatype


*/




#include <stdio.h>

int main()
{
    int number; //Declaring :Telling compiler to reserve a location with location name "number" 
    int number=10;  //While reserving a memory, we assign value to that memory location as well
    int number1,number2; //Declaring diff var at same time is possible..use commas to seperate
    int num1=20,num2=30; // = is used to assign value
    

    return 0;
}