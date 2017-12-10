#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int m1,d1,y1,m2,d2,y2,minm,mind,miny;
	printf("Enter date (mm/dd/yy)):");
	scanf("%d/%d/%d",&m1,&d1,&y1);
	minm=m1;
	mind=d1;
	miny=y1;
	
	for(;(m2!=0)&&(d2!=0)&&(y2!=0);)
   {   
       printf("Enter date (mm/dd/yy)):");
	   scanf("%d/%d/%d",&m2,&d2,&y2);
	   
	 if(miny<y2&&(m2!=0)&&(d2!=0)&&(y2!=0))
	  {
  		minm=minm;
  		mind=mind;
  		miny=miny;}	   
	  else if(miny>y2&&(m2!=0)&&(d2!=0)&&(y2!=0))
	  {
  		minm=m2;
  		mind=d2;
  		miny=y2;}
  	  else if(miny==y2&&(m2!=0)&&(d2!=0)&&(y2!=0)){
	  	if(minm<m2)
	  	 {minm=minm;
	      mind=mind;
	      miny=miny;}
        else if(minm>m2&&(m2!=0)&&(d2!=0)&&(y2!=0))
	  {
  		minm=m2;
  		mind=d2;
  		miny=y2;}
  		else if(minm==m2&&(m2!=0)&&(d2!=0)&&(y2!=0)){
		  	if(mind<d2)		  	  
	    {
  		   minm=minm;
  		   mind=mind;
  		   miny=miny;}
  		   else if(mind>d2&&(m2!=0)&&(d2!=0)&&(y2!=0))
  		   {minm=m2;
  		    mind=d2;
  		    miny=y2; }		  
		  }	  	
	  }	    	      	  	
	}
	printf("%d/%d/%.2d is the earliest date",minm,mind,miny);		 
	system("pause");
	return 0;
}

 