#include<stdio.h>
#include<stddef.h>

int main()
{
    int a=100;
    int *pa =&a;

    printf("%d\n", *pa);
    printf("%p\n",pa);
    printf("%p\n",&pa);

    int count=10,x;
    int *p;
    p= &count;
    x=*p;

    printf("%i\n",x);
    printf("%p\n",p);
    printf("%p\n",&p);

    int s1 = sizeof(pa);
    int s2=sizeof(p);

    printf("%d\n %d\n",s1,s2);\

    printf("%d",sizeof(a));
}