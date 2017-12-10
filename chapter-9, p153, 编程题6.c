#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double jishuan(double x){
  return 3*pow(x,5)+2*pow(x,4)-5*pow(x,3)-x*x+7*x-6;
} 
int main(void){
	double x;
	printf("Enter value for x: ");
	scanf("%lg",&x);
	printf("\n\nPolynomial value: %lg",jishuan(x));
	system("pause");
	return 0;
}