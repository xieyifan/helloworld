#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int m=100;
    int a,b,c;    
	while(m>=100&&m<1000)
	{				
	    a=m/100;
	    b=(m%100)/10;
	    c=(m%100)%10;
		if(m==(a*a*a+b*b*b+c*c*c))						
		{printf("%d\t",m);
		  m++;}
		 else
		 m++;  
	}
	system("pause");
	return 0;
}