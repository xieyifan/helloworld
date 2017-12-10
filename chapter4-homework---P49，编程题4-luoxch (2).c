#include<stdio.h>
int main(void)
{
	int a,b,c,d,amount;
	printf("Enter a dollar amount:\n");
	scanf("%d",&amount);
	a=amount/20;
	printf("\n$20 bills: %d",a);
	b=(amount-20*a)/10;
	printf("\n$10 bills: %d",b);
	c=(amount-20*a-10*b)/5;
	printf("\n $5 bills: %d",c);
	d=(amount-20*a-10*b-5*c)/1;
	printf("\n $1 bills: %d",d);
	return 0;
}