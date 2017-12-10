#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 100

int h=0; 

struct GoodInfo
{
	char id[30];	
	char name[30];
	float price;
	float discount;
	int amount;
	int remain;
}*Good[MAX];

struct GoodInfo* read(FILE *fp);
void info_init();
void info_change();
void info_delete();
void info_output(int i);
void info_search();
void info_insert();
void info_flush();
void info_freeGoodInfo();
void UI();

int main(void)
{
	info_init();
	for(;;){
		UI();
	}
	return 0;
}

struct GoodInfo* read(FILE *fp){
    struct GoodInfo* x=(struct GoodInfo*)malloc(sizeof(struct GoodInfo));    
	fscanf(fp,"%s",x->id);
	fscanf(fp,"%s",x->name);
	fscanf(fp,"%f",&x->price);
	fscanf(fp,"%f",&x->discount);
	fscanf(fp,"%d",&x->amount);
	fscanf(fp,"%d",&x->remain);	
	return x;
}
void info_init()
{
	FILE *fp;
	for(h=0;h<MAX;h++){
		Good[h]=NULL;
	}
	fp=fopen("D:\\Goods.txt","r");
	h=0;
	while(!feof(fp)){	
	  Good[h]=read(fp);		
	} 
	fclose(fp);
}

void info_change()
{
    char id1[20]; 
    int i;
   
    printf("输入您要修改的商品名称:");
    scanf("%s",id1);
    for(i=0;i<MAX;i++){
     if(strcmp(id1,Good[i]->name)==0){
    	printf("\n输入新的商品信息(以换行区分信息条目)\n");
    	scanf("%s",Good[i]->id);
    	
    	scanf("%f",&Good[i]->price);
    	scanf("%f",&Good[i]->discount);
    	scanf("%d",&Good[i]->amount);
    	scanf("%d",&Good[i]->remain); 
    	
		printf("修改商品信息成功!");
		break;
    } 
  }
   if(i==100)
   printf("\n您要修改的商品不存在!");
   printf("\n*******************************************");
}

void info_delete(){
	char *name;
	int i;
	printf("输入你要删除的商品名称:");
	scanf("%s",name);
	for(i=0;i<MAX;i++){
	  if(strcmp(name,Good[i]->name)==0){
  	    Good[i]=NULL;
		printf("!删除商品信息成功"); 
		break; 	
  	   }	
	}
	if(i==100)
	  printf("您要删除的商品信息不存在!");
}

void info_output(int i){
	int n;
	for(n=0;n<100;n++){
		if(n==i){
			printf("\n商品ID:%s",Good[n]->id);
			printf("商品名称:%s",Good[n]->name);
			printf("商品价格:%f",Good[n]->price);
			printf("商品折扣:%f\n",Good[n]->discount);
			printf("商品数目:%d",Good[n]->amount);
			printf("商品余数:%d",Good[n]->remain);
            break;
		}
	}
}

void info_search(){
	char *name;
	int i;
	printf("\n输入您要查询的商品名称:");
	scanf("%s",name);
	for(i=0;i<100;i++){
		if(strcmp(name,Good[i]->name)==0){
			{
			info_output(i);
			break;
			}
		}
	}
	if(i==100)
	  printf("\n您要查询的商品不存在!");
}

void info_insert(){	
	Good[h]= (struct GoodInfo*)malloc(sizeof(struct GoodInfo));
	printf("输入您要插入的商品信息(以换行区分信息条目):\n");
	scanf("%s",Good[h]->id);
	scanf("%s",Good[h]->name);
	scanf("%f",&Good[h]->price);
	scanf("%f",&Good[h]->discount);
	scanf("%d",&Good[h]->amount);
	scanf("%d",&Good[h]->remain);
	printf("商品信息插入完成!");
}

void info_flush(){
	FILE *fp;
	int i;
	fp=fopen("D:\\Goods.txt","w");
	for(i=0;i<MAX;i++){
		fprintf(fp,"%s\n",Good[i]->id);
		fprintf(fp,"%s\n",Good[i]->name);
		fprintf(fp,"%f\n",Good[i]->price);
		fprintf(fp,"%f\n",Good[i]->discount);
		fprintf(fp,"%d\n",Good[i]->amount);
		fprintf(fp,"%d\n",Good[i]->remain);
	}	
}

void info_freeGoodInfo(){
	int i;
	for(i=0;i<MAX;++i){
		free(Good[i]);
		Good[i] = NULL;
	}
}

void UI(){
	int n;
	printf("超市商品管理系统");
	printf("\n*******************************************");
	printf("\n1.商品信息的修改：");
	printf("\n2.删除某个商品信息：");
	printf("\n3.查找某个商品信息：");
	printf("\n4.插入某个商品信息：");
	printf("\n其他.退出系统：");
	printf("\n*******************************************");
	printf("\n输入您的选择：");
	scanf("%d",&n);
	switch(n)
	{
		case 1: 
                   info_change();
                   break;
		case 2: 
                   info_delete();
                   break;
		case 3: 
		           info_search();
		           break;
		case 4: 
		           info_insert();
		           break;
		default:   
		           info_flush();
		           info_freeGoodInfo();
		           exit(0);
	} 
}
