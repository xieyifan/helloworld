#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
	float a,b,c; 
	scanf("%f %f %f",&a,&b,&c);
	if((a+b)<=c||(a+c)<=b||(b+c)<=a)
	   printf("It isn't triangle.");
	else if(a==b&&b==c)
       printf("equilateral triangle");
    else if(abs(a*a+b*b-c*c)<=(1e-6)||abs(a*a+c*c-b*b)<=(1e-6)||abs(b*b+c*c-a*a)<=(1e-6))
	   printf("right-angled triangle");
	else if((a==b)||(a==c)||(b==c))
	   printf("isoceles triangle");
	else
	   printf("arbitrary triangle");
	system("pause");
	return 0;            
			   
}