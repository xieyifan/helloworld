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
   
    printf("������Ҫ�޸ĵ���Ʒ����:");
    scanf("%s",id1);
    for(i=0;i<MAX;i++){
     if(strcmp(id1,Good[i]->name)==0){
    	printf("\n�����µ���Ʒ��Ϣ(�Ի���������Ϣ��Ŀ)\n");
    	scanf("%s",Good[i]->id);
    	
    	scanf("%f",&Good[i]->price);
    	scanf("%f",&Good[i]->discount);
    	scanf("%d",&Good[i]->amount);
    	scanf("%d",&Good[i]->remain); 
    	
		printf("�޸���Ʒ��Ϣ�ɹ�!");
		break;
    } 
  }
   if(i==100)
   printf("\n��Ҫ�޸ĵ���Ʒ������!");
   printf("\n*******************************************");
}

void info_delete(){
	char *name;
	int i;
	printf("������Ҫɾ������Ʒ����:");
	scanf("%s",name);
	for(i=0;i<MAX;i++){
	  if(strcmp(name,Good[i]->name)==0){
  	    Good[i]=NULL;
		printf("!ɾ����Ʒ��Ϣ�ɹ�"); 
		break; 	
  	   }	
	}
	if(i==100)
	  printf("��Ҫɾ������Ʒ��Ϣ������!");
}

void info_output(int i){
	int n;
	for(n=0;n<100;n++){
		if(n==i){
			printf("\n��ƷID:%s",Good[n]->id);
			printf("��Ʒ����:%s",Good[n]->name);
			printf("��Ʒ�۸�:%f",Good[n]->price);
			printf("��Ʒ�ۿ�:%f\n",Good[n]->discount);
			printf("��Ʒ��Ŀ:%d",Good[n]->amount);
			printf("��Ʒ����:%d",Good[n]->remain);
            break;
		}
	}
}

void info_search(){
	char *name;
	int i;
	printf("\n������Ҫ��ѯ����Ʒ����:");
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
	  printf("\n��Ҫ��ѯ����Ʒ������!");
}

void info_insert(){	
	Good[h]= (struct GoodInfo*)malloc(sizeof(struct GoodInfo));
	printf("������Ҫ�������Ʒ��Ϣ(�Ի���������Ϣ��Ŀ):\n");
	scanf("%s",Good[h]->id);
	scanf("%s",Good[h]->name);
	scanf("%f",&Good[h]->price);
	scanf("%f",&Good[h]->discount);
	scanf("%d",&Good[h]->amount);
	scanf("%d",&Good[h]->remain);
	printf("��Ʒ��Ϣ�������!");
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
	printf("������Ʒ����ϵͳ");
	printf("\n*******************************************");
	printf("\n1.��Ʒ��Ϣ���޸ģ�");
	printf("\n2.ɾ��ĳ����Ʒ��Ϣ��");
	printf("\n3.����ĳ����Ʒ��Ϣ��");
	printf("\n4.����ĳ����Ʒ��Ϣ��");
	printf("\n����.�˳�ϵͳ��");
	printf("\n*******************************************");
	printf("\n��������ѡ��");
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
