#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	char ch1;
	char a[100];
	printf("Enter message to be encrypted: ");
	ch1=getchar();
	for(i=0;ch1!='\n';i++)
	{	a[i]=ch1;
		ch1=getchar();}
		a[i]=ch1;
	
	printf("\n\nEnter shift amount (1-25): ");
	scanf("%d",&n);
	printf("\n\nEncrypted message: ");
	for(i=0;a[i]!='\n';i++)
	{ 
	    if(a[i]>='A'&&a[i]<='Z')
		ch1=((a[i]-'A')+n)%26+'A';
	    else if(a[i]>='a'&&a[i]<='z')
	    ch1=((a[i]-'a')+n)%26+'a';	   
		else
		{ch1=a[i];}
        putchar(ch1);
	}
	
system("pause");
return 0;	
}