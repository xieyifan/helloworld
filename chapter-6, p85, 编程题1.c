#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float a,b;
	do {printf("\nEnter a number:");
		scanf("%g",&a);
		if(a>b)
		{
			b=a;
		}
		else{
			b=b;
		}	
		
		 		 	    			
	   }while(a>0);
	printf("\nThe largest number entered was %g",b);	
    system("pause");
	return 0;
}