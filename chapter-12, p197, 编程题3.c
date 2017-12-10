#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char a[100];
	int i,*p;
	p=&i;
	printf("Enter a message:");
	for(i=0;(a[*p]=getchar())!='\n';i++){
	}
	printf("\n\nReversal is: ");
	for(*p=*p-1;*p>=0;(*p)--){
		printf("%c",a[*p]);
	}
	system("pause");
	return 0;
}