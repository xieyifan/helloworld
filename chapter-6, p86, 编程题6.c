#include<stdio.h>
#include<stdlib.h>
int main(void)
{   int a;
    int i=1;
    printf("Enter the upper bound:");
    scanf("%d",&a);
    while((i*i)<=a){
    
    	
    	if((i*i)%2!=0)
    	i++;
    	else
    	{printf("\n\n%d",i*i);
    	 i++;}
    	
    	
    	
    }
	system("pause");
	return 0;
}