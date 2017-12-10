#include<stdio.h>
int main(void)
{
	float fahrenheit ,celsius;
	printf("Enter Frahrenheit temperatur:");
	scanf("%f",&fahrenheit);
	celsius = (fahrenheit-32.0)*(5.0/9.0);
	printf("\nCelsius equivalent: %.1f",celsius);
	return 0;
	
}