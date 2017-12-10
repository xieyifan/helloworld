#include<stdio.h>
#include<stdlib.h>
int main(void)
{  
    int i,n;
	char a[25]={};
	printf("Enter a first and last name: ");	
	 
	for(i=0;(a[i]=getchar())!='\n';i++){	
		}	
    printf("\n\nYou entered the name: ");
	for(i=0;a[i]!=' ';i++){
	}	
	for(n=i+1;n<25;n++){
		if(a[n]=='\n')
		break;
		printf("%c",a[n]);
	}
	printf(", %c.",a[0]);
	system("pause");
	return 0;
}
