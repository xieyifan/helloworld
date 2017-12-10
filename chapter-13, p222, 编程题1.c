#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    char w[100],lw[100],sw[100];
    int i;
    printf("Enter word: ");
    gets(w);
    strcpy(lw,w);
    strcpy(sw,w);
    while(strlen(w)!=4){
  	  printf("\nEnter word: ");
      gets(w);
   	  if(strcmp(lw,w)>0){
	      strcpy(lw,lw);
	      if(strcmp(sw,w)>0)
	        strcpy(sw,w);
	    }
	  else if(strcmp(lw,w)<0){
	  	strcpy(lw,w); 	
    }
    }
    printf("\nSmallest word: ");
    puts(sw);
    printf("\nLargest word: ");
    puts(lw); 
	system("pause");
	return 0;
}