#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char a[100];
	int i=0;
	int m=1;
	int n;
	printf("Please input your words:");		
    for(i=0;(a[i]=getchar())!='\n';i++){
    }
    for(i=0;a[i]!='\n';i++){
    	if(a[i]==' ')
    	 n=0;
    	else if(n==0){
    	   n=463;	
	       m++;	
	    } 
    }   
    printf("\nnumber of words:%d",m-1);
    system("pause");
    return 0;
}