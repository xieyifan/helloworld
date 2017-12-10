#include<stdio.h>
#include<stdlib.h>
int main(void)
{   
    int i;
	int t1,t2,t3,t4,t5,av1,av2,av3,av4,av5;
	int t6,t7,t8,t9,t10,av6,av7,av8,av9,av10;
	int max1,max2,max3,max4,max5,min1,min2,min3,min4,min5;
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
	t1=a[0]+a[1]+a[2]+a[3]+a[4],av1=t1/5;
	t2=b[0]+b[1]+b[2]+b[3]+b[4],av2=t2/5;
	t3=c[0]+c[1]+c[2]+c[3]+c[4],av3=t3/5;
	t4=d[0]+d[1]+d[2]+d[3]+d[4],av4=t4/5;
	t5=e[0]+e[1]+e[2]+e[3]+e[4],av5=t5/5;     
	printf("\nStudent Total Average");
	printf("\n1%6d%6d",t2,av2);
	printf("\n2%6d%6d",t2,av2);
	printf("\n3%6d%6d",t3,av3);
	printf("\n4%6d%6d",t4,av4);
	printf("\n5%6d%6d",t5,av5);
	int t[5]={a[0],b[0],c[0],d[0],e[0]};
	int k[5]={a[1],b[1],c[1],d[1],e[1]};
	int x[5]={a[2],b[2],c[2],d[2],e[2]};
	int y[5]={a[3],b[3],c[3],d[3],e[3]};
	int z[5]={a[4],b[4],c[4],d[4],e[4]};
	t6=a[0]+b[0]+c[0]+d[0]+e[0],av6=t6/5;
	t7=a[1]+b[1]+c[1]+d[1]+e[1],av7=t7/5;
	t8=a[2]+b[2]+c[2]+d[2]+e[2],av8=t8/5;
	t9=a[3]+b[3]+c[3]+d[3]+e[3],av9=t9/5;
	t10=a[4]+b[4]+c[4]+d[4]+e[4],av10=t10/5;
	max1=t[0],min1=t[0];
	for(i=0;i<5;i++){
		if(t[i]>max1){
		   max1=t[i];
		   min1=min1;}
		if(t[i]<min1){
		   min1=t[i];
		   max1=max1;}
	}
	max2=k[0],min2=k[0];
	for(i=0;i<5;i++){
		if(t[i]>max2){
		   max2=k[i];
		   min2=min2;}
		if(t[i]<min1){
		   min2=k[i];
		   max2=max2;}
	}
	max3=x[0],min3=x[0];
	for(i=0;i<5;i++){
		if(x[i]>max3){
		   max3=x[i];
		   min3=min3;}
		if(x[i]<min3){
		   min3=x[i];
		   max3=max3;}
	}
	max4=y[0],min4=y[0];
	for(i=0;i<5;i++){
		if(y[i]>max4){
		   max4=y[i];
		   min4=min4;}
		if(y[i]<min4){
		   min4=y[i];
		   max4=max4;}  
	}
	max5=z[0],min5=z[0];
	for(i=0;i<5;i++){
	    if(z[i]>max5){
		   max5=z[i];
		   min5=min5;}
		if(z[i]<min5){
		   min5=z[i];
		   max5=max5;}
	}		
	printf("\n\nQuiz Average High Low");
	printf("\n1%6d%6d%6d",av6,max1,min1);
	printf("\n2%6d%6d%6d",av7,max2,min2);
	printf("\n3%6d%6d%6d",av8,max3,min3);
	printf("\n4%6d%6d%6d",av9,max4,min4);
	printf("\n5%6d%6d%6d",av9,max5,min5);
	system("pause");
	return 0;
}