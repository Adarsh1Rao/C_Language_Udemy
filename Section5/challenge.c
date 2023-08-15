#include<stdio.h>

int main()
{

    enum company { GOOGLE,FB,XEROX,YAHOO,EBAY,MICROSOFT};

    enum company myCompany1 =XEROX;
    enum company  myCompany2=GOOGLE;
    enum company myCompany3=EBAY;

    printf("%d\n", myCompany1);
    printf("%d\n", myCompany2);
    printf("%d\n", myCompany3);


}