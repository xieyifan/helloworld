#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,b;
	printf("Please input age: ");
	scanf("%d",&a);
	if(a>59){
	printf("\n\nPlease input status:");
	scanf("%d",&b);
	 if(b==1)
	 printf("\n\nWorking senior");
	 else 
	 printf("\n\nRetired senior");
   } else if(a>20)
      printf("\n\nAdult");
      else 
	   if(a>12)
       printf("\n\nTeen");
       else
       printf("\n\nChild");
	   system("pause");
	   return 0;
	    
	}	


 