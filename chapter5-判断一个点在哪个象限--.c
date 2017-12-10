#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float x,y;
	printf("Please input coordinates of a point (x,y):");
	scanf("(%f,%f)",&x,&y);
	if(x==0&&y==0)			
	   printf("\nThis point is the origin.");
	else if(x>0&&y>0)			
	   printf("\nThis point is in QI.");
	else if(x<0&&y>0)			
	   printf("\nThis point is in QII.");
	else if(x<0&&y<0)			
	   printf("\nThis point is in QIII.");
    else if(x>0&&y<0)			
	   printf("\nThis point is in QIV.");
	else if(x==0&&y!=0)			
  	   printf("\nThis point is on the y-axis.");
    if(y==0&&x!=0)			
	   printf("\nThis point is on the x-axis.");
	system("pause");
	return 0;
	
	
}