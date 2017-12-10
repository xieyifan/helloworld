#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a[50],b[10]={0},i,n,m;
	printf("Please input some non-negative integers (0 to terminate):");
	scanf("%d",&a[0]);
	i=0;
    while(a[i]!=0){
    	i++;
    	scanf("%d",&a[i]);
    }
    i=0;
    while(a[i]!=0){
    	while(a[i]>9){
	    	n=a[i]%10;
	    	b[n]++;
	    	a[i]=a[i]/10;
	    }
	    b[a[i]]++;
	    i++;
    }
	m=b[0];
	for(n=0;n<10;n++){
		if(b[n]>m)
		  m=b[n];
	}
	printf("\n%d:",m);
	for(n=0;n<10;n++){
		if(b[n]==m)
		  printf("%8d",n);
	}
	system("pause");
	return 0;
}