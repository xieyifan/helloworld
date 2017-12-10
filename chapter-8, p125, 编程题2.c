#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a[10]={0};
	int i,x;
	long int d;
	printf("Enter a number: ");	
	scanf("%ld",&d);
	while(d>0){
	   x=d%10;
	   a[x]++;
	   d=d/10;	 			
	}
	printf("\nDigit:         0  1  2  3  4  5  6  7  8  9");
	printf("\nOccurrences: ");
	for(i=0;i<10;i++){
		printf("%3d",a[i]);
	}	
	system("pause");
	return 0;
} 


