#include<stdio.h>
#include<stdlib.h>
int main(void)
{   
    int m,n,i,d;
	printf("Enter number of days in month:");
	scanf("%d",&m);
	printf("\n\nEnter starting day of the week (1=Sun, 7=Sat):");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=(n-1);i++){
		printf("   ");
	}
	for(i=1;i<=m;i++)
	{ 	  
	  printf("%3d",i);
	  d=(i+n-1)%7;
	  if(d==0)
	  printf("\n");	    	   
	}
	system("pause");
	return 0; 
}