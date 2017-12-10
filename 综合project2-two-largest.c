#include<stdio.h>
#include<stdlib.h>
void find_two_larges(int a[],int *max,int *secmax){
     int i;
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
    printf("Please input 10 integers: ");
    for(i=0;i<10;i++){
    	scanf("%d",&a[i]);
    }
    find_two_larges(a,&max,&secmax);
	printf("\nThe largest:%d",max);
	for(i=0;i<10;i++){
		if(a[i]==max)
		   printf("\nThe index of the largest:%d",i);
	}
	printf("\nThe second largest:%d",secmax);
	for(i=0;i<10;i++){
		if(a[i]==secmax)
		  printf("\nThe index of the second largest:%d",i);
	}         
	system("pause");
	return 0;
}

