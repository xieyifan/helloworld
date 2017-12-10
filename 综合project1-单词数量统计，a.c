#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char a[100];
	int i,n=0;
	printf("Please input your words:");		
    for(i=0;(a[i]=getchar())!='\n';i++){
    }
    for(i=0;a[i]!='\n';i++){
    	if((a[i]!=' ')&&(a[i+1]==' '))
    	 n++;
    	else 
		 n=n;  
    }
    printf("\nnumber of words:%d",n+1);
    system("pause");
    return 0;
}