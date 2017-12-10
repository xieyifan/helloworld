#include<stdio.h>
int main(void)
{
	int num,n1,n2,n3;
	printf("Enter a three-digit number:");
	scanf("%d",&num);
	n1=(num%100)%10;
	n2=(num%100)/10;
	n3=num/100;
	printf("\n\nThe reversal is: %d%d%d",n1,n2,n3);
	return 0;
}