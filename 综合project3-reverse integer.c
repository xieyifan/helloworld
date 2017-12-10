#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a[10];
	int i=0;
	int n,x,m;
    printf("Please input an integer: ");
	scanf("%d",&n);	
	printf("\nAfter reversing: ");
	if(n<0){
	  printf("-");	
	  n=0-n;}
    do{
    	m=n%10;
    	if(m!=0)
    	  break;
    	n=n/10;
    }while(m==0);
    while(n>9){
    	m=n%10;
    	printf("%d",m);		
    	n=n/10;
    }
    printf("%d",n);	 
	system("pause");
	return 0;	 	
}