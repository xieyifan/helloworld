#include<stdio.h>
#include<stdlib.h>
int main(void)
{   
    int i,n;
    struct dc{
    	char *coun;
    	int code;
    };
    const struct dc coun_codes[]={
    {"Argentina",              54},{"Bangladesh",            880},
	{"Brazil",                 55},{"Burma (Myanmar)",        95},
	{"Congo,  Dem.  Rep.  of",243},{"Colombia",               57},
	{"China",                  86},{"Egypt",                  20},
	{"Ethiopia",              251},{"France",                 33},
	{"Germany",                49},{"India",                  91},
	{"Indonesia",              62},{"Iran",                   98},
	{"Italy",                  39},{"Japan",                  81},
	{"Mexico",                 52},{"Nigeria",               234},
	{"Pakistan",               92},{"Philippines",            63},
	{"Poland",                 48},{"Russia",                  7},
	{"South Africa",           27},{"Korea",                  82},
	{"Spain",                  34},{"Sudan",                 249},
	{"Thailand",               66},{"Turkey",                 90},
	{"Ukraine",               380},{"United Kingdom",         44},
	{"United States",           1},{"Vietnam",                84}};
	printf("Enter dialing code:");
	scanf("%d",&n);
	for(i=0;i<32;i++){
		if(n==(coun_codes[i].code)){
		printf("\n\nThe country with dialing code %d is %s",n,(coun_codes[i].coun));
		break;
		}		
	}
	if(i>=32)
	    printf("\nNo corresponding country found ");
	system("pause");
	return 0;
}