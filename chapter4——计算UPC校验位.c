#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,a1,a2,a3,a4,a5,b1,b2,b3,b4,b5,
	    suma,sumb,d;
	printf("Enter the first (single) digit:");
	scanf("%1d",&a);
	printf("\nEnter first group of five digits:");
	scanf("%1d%1d%1d%1d%1d",&a1,&a2,&a3,&a4,&a5);
	printf("\nEnter second group of five digits:");
	scanf("%1d%1d%1d%1d%1d",&b1,&b2,&b3,&b4,&b5);
	suma=a+a2+a4+b1+b3+b5;
	sumb=a1+a3+a5+b2+b4;
	d=3*suma+sumb;	
	printf("\nCheck digit: %d",9-(d-1)%10);
	system("pause");
	return 0;    
} 