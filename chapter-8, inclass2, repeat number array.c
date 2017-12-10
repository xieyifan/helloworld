#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a[10]={0};
	int n;
    unsigned long long i;
	printf("Enter a number:");
	scanf("%llu",&i);
	printf("\n\nRepeated digits:");
	while(i>0){
		n=i%10;
		a[n]++;			
		i/=10;
	} 
	n=0;
	while(n<=9){
	if(a[n]>=2){
	  printf("\n%d       %d",n,a[n]);
	}
	n++;
	}
	system("pause");
	return 0;
}