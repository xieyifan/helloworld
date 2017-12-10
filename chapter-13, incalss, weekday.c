#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	char *day[]={ "Monday", "Tuesday",
	              "Wednesday","Thursday","Friday",
                  "Saturday","Sunday"};
	char a[10];			  			                                
    int i,n;
    printf("Please enter a string:");
    gets(a);
    for(i=0;i<7;i++){
    	n=strcmp(a,day[i]);
    	if(n==0)
    	 break;
    }
    if((i+1)<=7)
      printf("\n\n%s is %d.",day[i],i+1);
    else if((i+1)>7)
      printf("\n\nNot found!");
    system("pause");
    return 0;	
}