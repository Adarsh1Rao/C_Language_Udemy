#include <stdio.h>

int main()
{

    int a = 10;
    int b = 12;
    int result1, result2, result3, result4, result5, result6, result7, result8, result9;

    result1 = a + b;
    result2 = a - b;
    result3 = a * b;
    result4 = a / b;
    result5 = a % b;
    result6 = a++; // Statement is executed before increment but variable data is updated


    printf("%d\n",result6); //Understand Properly
    printf("%d\n", a);   //Understand Properly


    result7 = ++a; // Statement is executed after increment and variable is also updated
    result8 = a--; // Statement is executed before decrement but variable is decremented
    result9 = --a; // Statement is executed after decrement and variable is also updated

    printf("  Sum is %d\n  Diff is %d\n  Multipli is %d\n  Divis is %d\n  Mod is %d\n  PostI is %d\n  PreI is %d\n  PostD is %d\n  PreD is %d\n" , result1, result2, result3, result4, result5, result6, result7, result8, result9);
    return 0;
}