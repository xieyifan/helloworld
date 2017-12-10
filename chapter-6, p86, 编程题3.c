#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,b,m,n,x,y;
	printf("Enter a fraction:");
	scanf("%d/%d",&a,&b);
		m=a;
	    n=a%b;		
		x=b;
		y=a;		
	while(n!=0){	
		y=x;
		x=n;
		n=y%x;
	}	
	printf("\n\nIn lowest terms: %d/%d",a/x,b/x);
	system("pause");
	return 0;
}
