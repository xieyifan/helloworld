#include<stdio.h>
#include<stdlib.h>
int main(void)
 {
 	int a,b,c; 	
 	printf("Enter a 24-hour time:  ");
 	scanf("%d:%d",&a,&b);
    c=a-12;
 	if(a<12)	
 	printf("Equivalent 12-hour time: %d:%d",a,b);
 	else 	
    printf("Equivalent 12-hour time: %d:%d PM",c,b);
    system("pause");
 	return 0;
 }