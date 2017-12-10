#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char ch;
	float m=0,n=0;
	float v;
	printf("Enter a sentence: ");
	while((ch=getchar())!='\n'){
		m++;
		if(ch==' ')
		n++;
	}
	v=(m-n)/(n+1);
	printf("\nAverage word length: %.1f",v);
	system("pause");
	return 0;
}