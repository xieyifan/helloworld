#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char a,b;	
	printf("Enter a first name and last name:\n");
	do{
	scanf("%c",&a);
	if(a!=' '){
		b=a;
		a=a;}
	if(a==' ')
	a=a;	
	}while(a==' ');
    while(a!='\n'){
	 scanf("%c",&a);
     if(a==' '){
   	    do {   	   
          scanf("%c",&a);
		  if(a=='\n')
		  break;  		  
	  	  printf("%c",a);	      
	     }while(a!='\n');	    	
  	    }	                             
    }
	printf(" %c.",b); 
	system("pause");
	return 0;
}