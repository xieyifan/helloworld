#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(void)
{    
    char a[15],b[15];   
    int i,n,x,y;
	int sum1=0,sum2=0;
	printf("Enter first word: ");
	for(i=0;(a[i]=getchar())!='\n';i++){
		a[i]=toupper(a[i]); 
	}
	for(i=i;i>=0;i--){
		sum1+=a[i];
	}
	printf("\nEnter second word: ");
	for(n=0;(b[n]=getchar())!='\n';n++){
		b[n]=toupper(b[n]); 
	}
	for(n=n;n>=0;n--){
		sum2+=b[n];
	}
	if(sum1==sum2)
	printf("\nThe words are anagrams.");
	if(sum1!=sum2)
	printf("\nThe words are not anagrams.");
	system("pause");
	return 0;	
}
