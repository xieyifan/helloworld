#include<stdio.h>
#include<stdlib.h>
double ip(const double *a,const double *b,double x[],double y[],int n){
	double z=0;
    a=x+n-1;
    b=y+n-1;
    while((a>=x)&&(b>=y)){
		z+=((*a)*(*b));
		a--;
		b--;     
	}
	return z;
}
int main(void)
{
	double *a,*b,x[5],y[5];	
	printf("Enter 5 numbers for the first array:");
	for(a=x;a<x+5;a++){
		scanf("%lf",a);
	}
	printf("\nEnter 5 numbers for the second array:");
	for(b=y;b<y+5;b++){
	    scanf("%lf",b);
	}	
	printf("\nThe inner product: %lf",ip(a,b,x,y,5)); 
	system("pause");
	return 0;
}