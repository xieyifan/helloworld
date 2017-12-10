#include<stdio.h>
#include<stdlib.h>
void paixu(int a[],int i,int *max, int *secmax ){
	 *max=a[0];
	 *secmax=a[0];
	 for(i=0;i<10;i++){
 		if(a[i]>*max){
		 	*secmax=*max;
		 	*max=a[i];
		 }
	    else if(a[i]<*max){
    	   if(a[i]>*secmax)
   	    	 *secmax=a[i];
   	       else{
       	   	 if(*max==*secmax)
 	   	       	*secmax=a[i];
   	         else 
	            secmax=secmax;
		   max=max;	 	    	    
    	}}
    	else if(a[i]==*max){
	    	max=max;
	    	secmax=secmax;
	    }
 	}    
}
int main(void)
{
	int a[10],i,max,secmax;
	printf("Enter 10 integers: ");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	i=10;
	paixu(a,i,&max,&secmax);
	printf("\nLargest: %d",max);
	printf("\nSecond Largest: %d",secmax);
	system("pause");
	return 0;
}
