#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
int main(void)
{  
    char fn[50],ex[50];
	int i,n;
	printf("Enter full name of a file: ");
    gets(fn);  
	for(i=0;fn[i]!='\0';i++){
		if(fn[i]=='.'){
			for(n=0;fn[i]!='\0';n++){
			ex[n]=fn[i+1];
			i++;
			}
			break;			
		}
		else
		  continue;	 		
	}
	strcat(ex,"\0");
	printf("\nThe extension is: ");
	puts(ex);
	system("pause");
	return 0;
}