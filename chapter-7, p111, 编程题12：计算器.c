#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float b;
	float c=0.0f;
	char ch;
	printf("Enter an expression:");
	scanf("%f",&b);
	c=b;
	while(b!='\n'){
		scanf("%c",&ch);
		if(ch=='\n')
		break;		
		switch(ch){
			case '+':
			scanf("%f",&b); 
			c+=b;
			break;
			case '-':
			scanf("%f",&b);
			c-=b;
			break;
			case '*':
			scanf("%f",&b);
			c*=b;
			break;
			case '/':
			scanf("%f",&b);
			c/=b; 
			break;
			
		}
	}
	printf("\nValue of expression: %g",c);
	system("pause");
	return 0;
}