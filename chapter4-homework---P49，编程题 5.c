#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a1,a2,a3,a4,a5,a6,b1,b2,b3,b4,b5,
	    suma,sumb,d,total;
	printf("Enter the first 11 digits of a UPC:");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&a1,&b1,&a2,&b2,&a3,&b3,&a4,&b4,&a5,&b5,&a6);
	suma=a1+a2+a3+a4+a5+a6;
	sumb=b1+b2+b3+b4+b5;
	d=(3*suma+sumb-1)%10;
	total=9-d;
	printf("\nCheck digit: %d",total);
	system("pause");
	return 0;   
} 