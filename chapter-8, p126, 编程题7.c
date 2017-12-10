#include<stdio.h>
#include<stdlib.h>
int main(void)
{   
    int i,m1,m2,m3,m4,m5,
	      n1,n2,n3,n4,n5; 
	int a[5]={0};
	int b[5]={0};
	int c[5]={0};
    int d[5]={0};
    int e[5]={0};
	printf("Enter row 1:");
	for(i=0;i<=4;i++){
		scanf("%d",&a[i]);
	}   
	printf("\nEnter row 2:");
    for(i=0;i<=4;i++){
	    scanf("%d",&b[i]);
	} 
	printf("\nEnter row 3:");
	for(i=0;i<=4;i++){
	    scanf("%d",&c[i]);
	}  
	printf("\nEnter row 4:");
	for(i=0;i<=4;i++){
	    scanf("%d",&d[i]);
	} 
	printf("\nEnter row 5:");
	for(i=0;i<=4;i++){
	    scanf("%d",&e[i]);
	}
	  m1=a[0]+a[1]+a[2]+a[3]+a[4];
	  m2=b[0]+b[1]+b[2]+b[3]+b[4];
	  m3=c[0]+c[1]+c[2]+c[3]+c[4];
	  m4=d[0]+d[1]+d[2]+d[3]+d[4];
	  m5=e[0]+e[1]+e[2]+e[3]+e[4];
	  n1=a[0]+b[0]+c[0]+d[0]+e[0];
	  n2=a[1]+b[1]+c[1]+d[1]+e[1];
	  n3=a[2]+b[2]+c[2]+d[2]+e[2];
	  n4=a[3]+b[3]+c[3]+d[3]+e[3];
	  n5=a[4]+b[4]+c[4]+d[4]+e[4];
	printf("\nRow totals:%6d%6d%6d%6d%6d",m1,m2,m3,m4,m5);
	printf("\nColumn totals:%6d%6d%6d%6d%6d",n1,n2,n3,n4,n5);
	system("pause");
	return 0;   	   
}
