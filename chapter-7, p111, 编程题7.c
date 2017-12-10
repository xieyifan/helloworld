#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int m1,m2,z1,z2,m3,z3;
	char a;
	printf("Enter two fractions separated by a +, -, * or / sign: ");
	scanf("%d/%d %c %d/%d",&z1,&m1,&a,&z2,&m2);
	switch(a){
		case '+':
		z3=z1*m2+z2*m1;
		m3=m1*m2;	
		break;
		case '-':
		z3=z1*m2-z2*m1;
		m3=m1*m2; 
		break;
		case '*':
	    z3=z1*z2;
	    m3=m1*m2;
		break;
		case '/':
		z3=z1*m2;
		m3=z2*m1;
		break;		 
	}
	printf("\nThe result is %d/%d",z3,m3);
	system("pause");
	return 0;
}