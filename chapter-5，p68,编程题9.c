#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int m1,d1,y1,m2,d2,y2;
	printf("Enter first date (mm/dd/yy):");
	scanf("%d/%d/%d",&m1,&d1,&y1);
	printf("\n\nEnter second date (mm/dd/yy):");
	scanf("%d/%d/%d",&m2,&d2,&y2);
	if(y1<y2)
	printf("\n\n%d/%d/%.2d is earlier than %d/%d/%.2d",m1,d1,y1,m2,d2,y2);
    else 
    {if(y1>y2)
     printf("\n\n%d/%d/%.2d is earlier than %d/%d/%.2d",m2,d2,y2,m1,d1,y1);
     if(y1==y2){
	    if(m1<m2)
		printf("%d/%d/%.2d/ is earlier than %d/%d/%.2d",m1,d1,y1,m2,d2,y2);}
        else if(m1>m2)
        printf("\n\n%d/%d/%.2d is earlier than %d/%d/%.2d",m2,d2,y2,m1,d2,y2);} 
	   	if(m1==m2){
       	   if(d1<d2)
       	   printf("\n\n%d/%d/%.2d is earlier than %d/%d/%.2d",m1,d1,y1,m2,d2,y2);
       	   else if(d1>d2)
       	   printf("\n\n%d/%d/%.2d is earlier than %d/%d/%.2d",m2,d2,y2,m1,d1,y1);}
    system("pause");
	return 0;            	
}
					
                
                
              	
              		  

 
 