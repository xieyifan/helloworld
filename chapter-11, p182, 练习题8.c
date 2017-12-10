#include<stdio.h>
#include<stdlib.h>
int *zuida(int a[],int i,int *max){
	*max=a[0];
	for(i=0;i<10;i++){
		if(a[i]>*max)
		  *max=a[i];
		else
		  max=max;     		  
	} 
    return max;
}
int main(void)	
{
	int a[10],i,max;
	printf("Enter 10 integers:");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	i=10;
	*zuida(a,i,&max);
	printf("\n\nThe largest: %d",max);
	system("pause");
	return 0;
}
	
