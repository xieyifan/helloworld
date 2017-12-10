#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool sou(int a[],int key,int *n){
	int i=0; 
	for(n=a;n<a+5;n++){
	    if(key!=*n)
	    i++;
	    else
	    i=i;
	}
	if(i==5)
	return false;
	else
	return true; 		                                            
}
int main(void)
{
	int a[5],*n,key;
	printf("Enter 5 integers:");
	for(n=a;n<a+5;n++){
	   scanf("%d",n);	
	}
	printf("\n\nEnter a key:");
	scanf("%d",&key);
	printf("\n\nThe result: %d",sou(a,key,n));
	system("pause");
	return 0;
	
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   