#include<stdio.h>
#include<stdlib.h>
int main(void)
{   
  int i,m,n;
  printf("Enter a positive integer:");
  scanf("%d",&i);
  printf("\n\nThe output is:\n");
  for(m=1;m<=i;m++)
  { 	
  	for(n=1;n<=m;n++ )
  	{
	 printf("%2d",n); 	
	  }
	 printf("\n\n"); 
  }  
  system("pause");
  return 0;
}