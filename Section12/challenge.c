#include<stdio.h>
#include<stddef.h>

int main(void)
{
    int variable =50;
    int *pvariable=&variable;

    printf("%p\n",&pvariable); //pvariable ka address in memory where it is stored
    printf("%p\n",pvariable); //pvariable kiska address store kar rha h uska var
    printf("%d\n",*pvariable); //jiska address store kar rha h ..uss location pe kya value h


}