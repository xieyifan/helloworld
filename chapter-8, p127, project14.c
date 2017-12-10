#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char a[50];
	char b,ch;
	int i,n,x,y;
	printf("Enter a sentence:");
	for(i=0;i<50;i++){
		ch=getchar();
		if(ch=='.'||ch=='?'||ch=='!')
		{b=ch;
		  break;}
		  a[i]=ch;
	}
	n=i;	
	printf("\n\nReversal of sentence:");
    for(x=n-1;x>=0;x--){
    	if((a[x]==' ')||x==0){
    		if(x==0)
    		printf(" ");
	    	for(y=x;y<n;y++){
	    		putchar(a[y]);
	    	}
	    	n=x;
	    }
    }
	
	printf("%c",b);
	system("pause");
	return 0;
}