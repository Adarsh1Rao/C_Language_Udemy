#include<stdio.h>

void add();   //This basically tells compiler that a function is created and can 
            //be called in program even before the implemnetation

int main()
{
    add();
    return 0;
}

void add()
{

}

//If function is implemented and then called, we dont need to use the prototype