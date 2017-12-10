#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n,i;
	int a[50]={0,1};
	for(i=2;i<=50;i++){
		a[i]+=(a[i-1]+a[i-2]);
	}
	printf("Enter number of fibonacci numbers:");
	scanf("%d",&n);
	printf("\n\nFibonacci numbers: 0");
	for(i=1;i<=n-1;i++){
		printf(" ,%d",a[i]);
	}
	system("pause");
	return 0;
}
	
