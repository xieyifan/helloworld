#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,b,c,d,max,min;
	printf("Enter four integers:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if((a>b)){
		max=a,min=b;
	}
    else{
    	max=b,min=a;
    }  
	if(c>max)
	  max=c;
	if(c<min)
      min=c;
    if(d>max)
	  max=d;
	if(d<min) 
	  min=d;
	printf("\n\nLargest: %d",max);
	printf("\n\nSmallest: %d",min);     	     		
	system("pause");
	return 0;
}
