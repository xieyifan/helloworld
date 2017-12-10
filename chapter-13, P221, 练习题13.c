#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	char dom[100],in[100];
	int i; 
	printf("Enter a domain name:");
	for(i=0;(dom[i]=getchar())!='\n';i++){
	}
	dom[i+1]='\0';
	strcpy(in,"http://www.");
	strcat(dom,"/index.html");
	strcat(in,dom);
	printf("\n\nThe URL is: ");
    for(i=0;in[i]!='\n';i++){
        printf("%c",in[i]);
    }	
    for(i=i+1;in[i]!='\0';i++){
    	printf("%c",in[i]);
    }
	system("pause");
	return 0;
}