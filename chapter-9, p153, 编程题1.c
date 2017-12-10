#include<stdio.h>
#include<stdlib.h>
int fuzhu(int a[],int l,int h){
	int pe=a[l];
	for(;;){
      while(l<h&&pe<=a[h])
	    h--;
	  if(l>=h)
        break;
	  a[l++]=a[h];
	  while(l<h&&a[l]<=pe)
	    l++;
	  if(l>=h)
	    break;			
		a[h--]=a[l];			  
	}  
    a[h]=pe;
	return h;
}
void paixu(int a[],int l,int h){
	int m;
	if(l>=h)
	  return;
	m=fuzhu(a,l,h);
	paixu(a,l,m-1);
	paixu(a,m+1,h);  
}
int main(void){
	int a[10],i;
	printf("Enter 10 numbers to be sorted:");
	for(i=0;i<10;i++){
	   scanf("%d",&a[i]);
	}
	paixu(a,0,9);
	printf("\nIn sorted order: ");
	for(i=0;i<10;i++){
	   printf("%d ",a[i]);
	}
	system("pause");
	return 0;
}