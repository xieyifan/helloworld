#include<stdio.h>
#include<stdlib.h>
float shui(float a,float b){
	if(a<=750){
   	  b=a/100;
   }
   else if((a>750)&&(a<=2250)) {
   	  b=(a-750)/50+7.50;
   }  
   else if((a>2250)&&(a<=3750)){
   	  b=((a-2250)*3/100)+37.50;  
   }      
   else if((a>3750)&&(a<=5250)){  	 
      b=(a-3750)/25+82.50;
   }
   else if((a>5250)&&(a<=7000)){
   	  b=(a-5250)/20+142.50;
   }
   if(a>7000){
   	  b=((a-7000)*6/100)+230.00;   
   }
   return b;
} 
int main(void){
	float in,tax;
	printf("Enter amount of taxable income: ");
	scanf("%f",&in);
	printf("\nTax due: $%.2f",shui(in,tax));
	system("pause");
	return 0;
}