#include <stdio.h>  
int main() 
{
      char str[100];
      int i;

      printf("Enter a value :");
      scanf("%s %d",str,&i); //format is string but str is char datatype..so no need of &
                             // integer is in %d so we need &

      printf("\nYou entered : %s %d",str,i);
      return 0;

}