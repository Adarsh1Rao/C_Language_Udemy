#include <stdio.h>

int main()
{

    unsigned int a = 12; // 0000 1100
    unsigned int b = 40; // 0010 1000

    int result1 = a & b;
    int result2 = a | b;
    int result3 = a ^ b;
    int result4 = ~b;      // Bitwise complement of integer is -(N+1)
    int result5 = a >> 2;
    int result6 = a << 3;

    printf("\n%d", result1); // 0000 1000  = 8
    printf("\n%d", result2); // 0010 1100  =44
    printf("\n%d", result3); // 0010 0100  =36
    printf("\n%d", result4); // 1101 0111  =215        xxxxxx
    printf("\n%d", result5); // 0000 0011  =3
    printf("\n%d", result6); // 0110 0000  =96

    return 0;
}