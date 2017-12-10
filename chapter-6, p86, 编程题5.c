#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int m;
	printf("Enter a number:");
	scanf("%d",&m);
	printf("\nThe reversal is: ");    
  
    do{                  
      printf("%d", m%10);
      m=m/10;         
	} while((m%10)!=0);
	system("pause");
	return 0;
}
 
 