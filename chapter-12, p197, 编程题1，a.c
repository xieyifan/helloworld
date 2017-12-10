#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char a[100];
	int i;
	printf("Enter a message:");
	for(i=0;(a[i]=getchar())!='\n';i++){
	}
	printf("\n\nReversal is: ");
	for(i=i-1;i>=0;i--){
		printf("%c",a[i]);
	}
	system("pause");
	return 0;
}