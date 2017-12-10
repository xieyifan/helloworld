#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a;
	printf("Please input air quality index:");
	scanf("%d",&a);
	if((a>=0)&&(a<=50))
	  printf("\nbest");
	else if((a>=51)&&(a<=100))
	  printf("\ngood");
	else if((a>=101)&&(a<=150))
	  printf("\npolluted I");
	else if((a>=151)&&(a<=200))
	  printf("\npolluted II");
	else if((a>=201)&&(a<=300))
      printf("\npolluted III");
    else
	  printf("\npolluted IV");
	system("pause");
	return 0;
}