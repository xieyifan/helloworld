#include<stdio.h>
#include<stdlib.h>
void fenli(double x,long *a, double *b, char *ch ){
     if(x>0){
        *ch='+';
        *a=(long)x;
        *b=x-*a;
         }
     else if(x<0){
        *ch='-';
        *a=0-(long)x;
        *b=-(x)-*a;
        }    
}
int main(void)
{
   double x,b;
   long a;
   char ch;
   printf("Enter a number: ");
   scanf("%lf",&x);
   fenli(x,&a,&b,&ch);
   if(x=0){
       printf("\nsign: ¡® ¡¯£¨space£©");
       printf("\ninteger part£º0");
       printf("\nfractional part: 0");
        }
   else{
       printf("\nsign: %c",ch);
       printf("\ninteger part: %ld",a);
       printf("\nfractional part: %lg",b);
       }        
   system("pause");
   return 0;
}
