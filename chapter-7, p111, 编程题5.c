#include<stdio.h>
#include<stdlib.h>
int main(void)
{	char ch;
	int a,sum=0;
	printf("Enter a word: ");	
	do{	
	    scanf("%c",&ch);
		if(ch=='\n')
		break;
		else	
		switch (ch){
			case'A': case'E': case'I': case'L': case'N': case'O': case'R': case'S': case'T': case'U': case'a': case'e': case'i': case'l': case'n': case'o': case'r': case's': case't': case'u':		
			a=1;
			break;
			case'D': case'G': case'd': case'g':		
			a=2;
			break;
			case'B': case'C': case'M': case'P': case'b': case'c': case'm': case'p':			
			a=3;
			break;
			case'F': case'H': case'V': case'W': case'Y': case'f': case'h': case'v': case'w': case'y':		
			a=4;
			break;
			case'K': case'k':			
			a=5;
			break;
			case'J': case'X': case'j': case'x':			
			a=8;
			break;
			case'Q': case'Z': case'q': case'z': 			
			a=10;
			break;			
		}
		sum+=a;	
		}while(ch!='\n');
	printf("\nScrabble value: %d",sum);
	system("pause");
	return 0;	
} 
 
 
 