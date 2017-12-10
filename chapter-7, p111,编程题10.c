#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char b;
	int  n=0;
	printf("Enter a sentence:");
    
 do{
		scanf("%c",&b);
	    switch(b){
	    case'a': case'A': case'e': case'E': case'i': case'I': case'o': case'O': case'u': case'U':
		n++;
		break;
		default:
		n+=0;
		}
	}while(b!='\n');
	printf("\nYour sentence contains %d vowels.",n);
	system("pause");
	return 0;
}