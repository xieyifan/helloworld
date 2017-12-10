#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int h,m,t;
	printf("Enter a 24-hour time:");
	scanf("%d:%d",&h,&m);
	t=(60*h)+m; 
	if(t<=531)
	printf("\n\nClosest departure time is 8:00 a.m., arriving at 10:16 a.m.");
	else if((t>=532)&&(t<=631))
	printf("\n\nClosest departure time is 9:43 a.m., arriving at 11:52 a.m.");
	else if((t>=631)&&(t<723))
	printf("\n\nClosest departure time is 11:19 a.m., arriving at 1:31 p.m.");
	else if((t>=723)&&(t<804))
	printf("\n\nClosest departure time is 12:47 p.m., arriving at 3:00 P.m.");
	else if((t>=804)&&(t<893))
	printf("\n\nClosest departure time is 2:00 p.m., arriving at 4:08 p.m.");
	else if((t>=983)&&(t<998))
	printf("\n\nClosest departure time is 3:45 p.m., arriving at 5:55 p.m.");
	else if((t>=998)&&(t<1173))
	printf("\n\nClosest departure time is 7:00 p.m., arriving at 9:20 p.m.");
	else if(t>=1173)
	printf("\n\nClosest departure time is 9:45 p.m., arriving at 11:58 p.m.");	
	system("pause");
	return 0;
}