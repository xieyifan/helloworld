#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char a[30],*p;
	printf("Enter a message:");	
	for(p=a;(*p=getchar())!='\n';p++){
	}
	printf("\n\nReversal is: ");
	for(p=p;p>=a;p--){
	   if(*p=='\n')  	
		continue;	
       printf("%c",*p); 
	}
	system("pause");
	return 0;
}