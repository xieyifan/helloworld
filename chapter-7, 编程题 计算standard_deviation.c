#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
	float a,max,min,ss,sum,av,sd;
	float  n=1;
           ss=0;
           sum=0;
	printf("Enter a series numbers:");
	
	scanf("%g",&a);
	max=a;
	min=a;
	ss=a*a;
	sum=a;
	while(a!=0){
		scanf("%g",&a);
	    if(a==0)
	    break;
		if(a>max){
			max=a;
			min=min;
		}
	
		if(a<min) {
			min=a;
			max=max;
		}
		 
	    ss+=a*a;		 
		sum+=a;
		n++;
		av=(sum)/n;
		
		
		
	}
	sd=sqrt(ss/n-av*av);
	printf("\nsmallest:%g",min);
	printf("\nlargest:%g",max);
	printf("\naverage:%g",av);
	printf("\nstandard_deviation:%g",sd);
	system("pause");
	return 0;
}