#include<stdio.h>
#include<stdlib.h>
void time(long tot,int *hr,int *min,int *sec){
	int zj1;
	*hr=(tot/3600);
	if(*hr>=24)
	   *hr=0;
	else
	   hr=hr;
	zj1=tot%3600;
	*min=(zj1/60);
	*sec=(zj1%60);     
} 
int main(void)
{
	long tot;
	int hr,min,sec;
	printf("Enter total seconds:");
	scanf("%ld",&tot);
	time(tot,&hr,&min,&sec);
	printf("\nTime:");
	printf("\n%d:%d:%d",hr,min,sec); 
	system("pasue");
	return 0;
}
