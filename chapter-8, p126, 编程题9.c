#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	char a[10][10];
	char ch='A';
	int b,i,j,i1,j1;
	int x=0;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){			
			  a[i][j]='.';
		}
	}		
	srand((unsigned) time(NULL));
	i=0,j=0;
	a[i][j]=ch++;
	b=rand()%4;
	while(x<4&&ch<='Z'){		
		   switch ((b+x)%4){
   			case 0:
   			  i1=i;
			  j1=j+1;	 	    			 
   			  break;
   			case 1:
   			  i1=i;
			  j1=j-1;	        	  
   			  break;
            case 2:
			  i1=i+1;
			  j1=j;	     	 
			  break;
	        case 3:
			  i1=i-1;
			  j1=j;	      	  
			  break;    
   		}	
   		if(i<=9&&i>=0&&j>=0&&j<=9&&a[i1][j1]=='.'){
   			i=i1;
   			j=j1;
   			a[i][j]=ch++;
   			b=rand()%4;
   			x=0;	   	
		   }
		else  
		   x++;   
	}
    for(i=0;i<10;i++){   	
    	for(j=0;j<10;j++){
	       printf("%2c",a[i][j]);		   	
	    }
	    printf("\n");
    }	
    system("pause");
    return 0;
}