#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a[5][5],b[5],c[5],d[5];
	int i,j,n;
	int sum1,sum2,av1,av2;
	int max,min;
	printf("Enter grades for student 1:");
	for(i=0,j=0;j<5;j++){
		scanf("%d",&a[i][j]);
	}
	printf("\nEnter grades for student 2:");
	for(i=1,j=0;j<5;j++){
		scanf("%d",&a[i][j]);
	}
	printf("\nEnter grades for student 3:");
	for(i=2,j=0;j<5;j++){
		scanf("%d",&a[i][j]);
	}
	printf("\nEnter grades for student 4:");
	for(i=3,j=0;j<5;j++){
		scanf("%d",&a[i][j]);
	}
	printf("\nEnter grades for student 5:");
	for(i=4,j=0;j<5;j++){
		scanf("%d",&a[i][j]);
	}
	printf("\nStudent Total Average\n");
	n=1;	
	for(i=0;i<5;i++){	
	   sum1=0;  	  	
	   for(j=0;j<5;j++){
   		sum1+=a[i][j];   		 		
   	}
    av1=sum1/5;  
    printf("%d%6d%6d",n,sum1,av1);
    printf("\n");
    n++;
	}
	printf("\nQuiz Average High Low");
	for(j=0;j<5;j++){	
	   sum2=0;  	  	
	   for(i=0;i<5;i++){
   		sum2+=a[i][j];   		 		
   	}
    av2=sum2/5;
	b[j]=av2 ;  
	}
	for(j=0;j<5;j++){
	    max=a[0][j];
   		min=a[0][j];		
	   for(i=0;i<5;i++){   		
   		if(a[i][j]>max){
		   	max=a[i][j];
		   	min=min;
		   }
	    if(a[i][j]<max){
		   	min=a[i][j];
		   	max=max;
		   }		  
   	}
	   c[j]=max;
	   d[j]=min;	   	
	}
	printf("\n1%6d%6d%6d",b[0],c[0],d[0]);
	printf("\n2%6d%6d%6d",b[1],c[1],d[1]);
	printf("\n3%6d%6d%6d",b[2],c[2],d[2]);
	printf("\n4%6d%6d%6d",b[3],c[3],d[3]);
	printf("\n5%6d%6d%6d",b[4],c[4],d[4]);	
	system("pause");
	return 0;	
}
	