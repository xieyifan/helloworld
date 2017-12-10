#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(void)
{
	int i=0;
	char a[]={0} ,ch;
	printf("Enter message: ");
	printf("\nIn B1FF-speak: ");
	while(ch!='\n'){
	   scanf("%c",&ch);
	   a[i]=ch;
	   a[i]=toupper(a[i]);
	   if(ch=='\n')
	   break;
       switch (a[i]){
	     case 'A':
			printf("4");
			break;
	     case 'B':
			printf("8");
			break;
	     case 'E':
			printf("3");
			break;
		 case 'I':
		    printf("1");
			break;
	     case 'O':
		    printf("0");
			break;
	     case 'S':
		    printf("5");
			break;
		 default:
		    printf("%c",a[i]);
			break;  					
		}
	    i++;
		
	}	
	printf("!!!!!!!!!!");
	system("pause");
	return 0;
}
