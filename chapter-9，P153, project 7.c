#include<stdio.h>
#include<stdlib.h>
int mypower(int x,int n){
	if(n==0)
	return 1;
    else if((n%2)==0){
    	return x*x*mypower(x,n-2);
    } 
    else if(n%2!=0){
    	return x*mypower(x,n-1);   	
    }
}
int main(void){
	int x,n,jieguo;
	scanf("%d %d",&x,&n);
	jieguo=mypower(x,n);
	printf("\nmypower(%d,%d):  %d",x,n,jieguo);
	system("pause");
	return 0;
}