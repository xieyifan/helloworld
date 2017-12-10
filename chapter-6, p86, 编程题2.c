#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,b1,b2,m,n;
	printf("Enter two integers:");
	scanf("%d %d",&a,&b1);
	m=b1;
	n=a%b1;
	while(n!=0){
	
		b2=n;
		n=a%b2;
		a=b2;
	}
	printf("\n\nGreatest common divisor: %d",b2);	
	system("pause");
	return 0;
}