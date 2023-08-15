/*
Fill the following table for the expressions given below and
then evaluate the result. A sample entry has been filled in the
table for expression (a).



Operator    Left    Right       Remark
/           10      5 or 5      Left operand is
                    / 2/ 1      unambiguous, Right
                                is not


(a) g = 10 / 5 /2 / 1 ;
(b) b = 3 / 2 + 5 * 4 / 3 ;
(c) a = b = c = 3 + 4 ;
*/

/*
a: / is operator , 10 is left, 5/2/1 is right operand
Output : 2/2/1
        1/1
        1



b : / is operator, 3 is left operand unambiguous, right operand is ambiguous 
Output : 1+5*4/3
        1+20/3
        1+6
        7 





c: 7 is output and + is operator, a is left operand and =b or =b=c=3+4 can be right
#include<stdio.h>

int main()
{

    int a,b,c;
    a = b = c = 3 + 4 ;
    printf("%d %d %d",a,b,c);
}
*/
