#include<stdio.h>
#include<stdlib.h>
#define pi 3.1415
int main(void)
{
   float  n,edge_length,height,length,width,
         edge_top,edge_bottom,height2,radium,area;
   printf("Please choose a shape you want to calculate (triangle 1, rectangle 2, ladder 3, circle 4):");
   scanf("%f",&n);
   if(n==1){
    printf("\n\nYour choice is triangle. Please input the edge_length and height:");
    scanf("%f %f",&edge_length,&height);
    area=(height*edge_length)/2;
    printf("\n\narea is: %.4f",area);}
   else if(n==2){
    printf("\n\nYour choice is rectangle. Please input the edge_length and height:");
    area=length*width;
    scanf("%f %f",&length,&width);
    printf("\n\narea is: %.4f",area);}
   else if(n==3){ 
    printf("\n\nYour choice is ladder. Please input the edge_length and height:");
    area=(edge_top+edge_bottom)*height2/2;
    scanf("%f %f %f",&edge_top,&edge_bottom,&height2);
    printf("\n\narea is: %.4f",area);}
   else if(n==4){
    printf("\n\nYour choice is circle. Please input the edge_length and height:");
    scanf("%f",&radium);
    area=(radium*radium*pi)/2;
    printf("\n\narea is: %.4f",area);}
   system("pause");
   return 0;
}