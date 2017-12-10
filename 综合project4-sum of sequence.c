#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,a;
	float n=0;
	float b=2,c=1,d;
	printf("please input the number of items: ");
	scanf("%d",&a);

	for(i=0;i<a;i++){
		n+=((float)b/(float)c);
		d=b+c;
		c=b;
		b=d;		
	}
	printf("\nThe sum is: %f",n);
	system("pause");
	return 0;
}