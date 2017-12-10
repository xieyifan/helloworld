#include<stdio.h>
#include<stdlib.h>
int main(void)
{
   double n,sum=0;
   printf("This program sums a series of double values.\n");
   printf("Enter values (0 to terminate): ");
   scanf("%lg",&n);
   while(n!=0){
   sum+=n;
   scanf("%lg",&n);
   }
   printf("\nThe sum is: %lg",sum);
   system("pause");
   return 0;
   }
