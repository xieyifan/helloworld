#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char a;
	int l=0;
    int s=0;
	printf("Enter a sentence:");
	while((a=getchar())!='\n'){
				
		if(a==' '){
		s++;}			
		l++;
			
	}
	printf("\n\nletters:%d\n",l);
	printf("spaces:%d",s);
	system("pause");
	return 0;
} 