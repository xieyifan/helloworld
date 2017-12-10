#include<stdio.h>
int main(void)
{
	int num,n1,n2,n3,n4,n5;
	printf("Enter a number between 0 and 32767:");
	scanf("%d",&num);
	n1=num%8;
	n2=num/8%8;
    n3=num/(8*8)%8;
    n4=num/(8*8*8)%8;
    n5=num/(8*8*8*8)%8;
    printf("\nIn octal, your number is: %d%d%d%d%d",n5,n4,n3,n2,n1);
    return 0;
}