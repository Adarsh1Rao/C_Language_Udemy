
#include<stdio.h>

 int main( )
{
// int i=10,x,y;

// x= i++ + ++i + ++i;  //10 + 12 =22
// y= ++i + i++;  // 14 + 13=27           //evaluation L to R only but remeber rule 1 of pre increment or decrement
// printf("%d" ,x);

//  printf("%d ", x );
//  printf("%d ", y);

//  printf ("%d %d %d\n", i++,i++,i++);               //for such cases,,compiler generates undefined outputs
//  printf("%d",i);

// printf("%d %d %d\n",++i,++i,++i);                  //here compiler generates undefined outputs
// printf("%d",i);

// printf("%d %d %d\n", i++,++i,i++);               In last three cases, compiler is undefined behaviour and 
                                                //goes from right to left, no precedence or associativity
// printf("%d",i); 

//***************************************************************

// int m=5;
// printf("%d ",m++);
// printf("\n%d",m);
// printf("\n%d",++m);
// printf("\n%d",m);

// int n=1;
// int o=1;
// int p=1;
// int q=1;
// int r=1;
// int s=1;

// printf("%d %d %d",n,n++,++n);
// printf("\n %d %d %d %d",o,++o,++o,++o);
// printf("\n %d %d %d %d",p,p++,p++,p++);
// printf("\n %d %d %d %d",q,q++,++q,q++);
// printf("\n %d %d %d %d",r,++r,r++,++r);    
// printf("\n %d %d %d %d %d %d",++n,++s,n++,++q,++r,s++)  ;  

int x=1,z=1;
int y=0,w=0;
y= x++ + x++ + x++ + x++;
 w= ++z + ++z + ++z + ++z;
printf("%d\n",x);
printf("%d\n",y);
 printf("%d",w);

}