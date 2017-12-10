#include<stdio.h>
#include<stdlib.h>
int main(void)
{
   float in,t;
   printf("Enter income:\n");
   scanf("%f",&in);
   if(in<=750){
   	  t=in/100;
   	  printf("The tax is: $%.2f",t);
   }
   else if((in>750)&&(in<=2250)) {
   	  t=(in-750)/50+7.50;
   	  printf("\n\nThe tax is: $%.2f",t);
   }  
   else if((in>2250)&&(in<=3750)){
   	  t=((in-2250)*3/100)+37.50;
   	  printf("\n\nThe tax is: $%.2f",t);
   }      
   else if((in>3750)&&(in<=5250)){  	 
      t=(in-3750)/25+82.50;
      printf("\n\nThe tax is: $%.2f",t);
   }
   else if((in>5250)&&(in<=7000)){
   	  t=(in-5250)/20+142.50;
   	  printf("\n\nThe tax is: $%.2f",t);
   }
   if(in>7000){
   	  t=((in-7000)*6/100)+230.00;
   	  printf("\n\nThe tax is: $%.2f",t);
   }
   system("pause");
   return 0;	      
} 
 