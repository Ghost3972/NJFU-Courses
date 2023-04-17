#include<stdio.h>
#include<stdlib.h>/*����malloc����*/

typedef struct node
{
	int math;										/*��ѧ*/
	int phy;											/*����*/
	int eng;											/*Ӣ��*/
	int c;											/*c����*/
	char s[100];									/*����*/
	int num;											/*ѧ��*/ 
	struct node* next;								/*��һ���ڵ�*/
}Node;
	int m;
void creat_list(Node** head,int n);/*����n���ڵ������*/ 
void average(Node* head,int n);	/*��ƽ����*/
void rank(Node* head,int n,int *a,int *b,int *c,int* d); 	/*����*/ 
void f(int *a,int n);/*rank����*/ 
void printfmath(Node* head,int n);				/*�����ѧ��߷�����ѧ�� */
void printfphy(Node* head,int n);				/*�����ѧ��߷�����ѧ��*/ 
void printfeng(Node* head,int n);				/*�����ѧ��߷�����ѧ�� */
void printfc(Node* head,int n);					/*�����ѧ��߷�����ѧ�� */
void free_list(Node** head);					/*�ͷ��б�*/  
int main()
{
	Node* head=NULL;				/*ͷָ��NULL*/ 
	int n;	
	putchar('\n');
	putchar('\n');
	putchar('\n');
	for(m=0;m<37;m++){
		printf("*");
	}
	printf("ѧ������ϵͳ") ;
	for(m=0;m<37;m++){
		printf("*");
	}
	putchar('\n');
	printf("��������:");									/*������*/ 
	scanf("%d",&n);											/*����*/ 
	int *a=(int*)malloc(sizeof(int)*n);/*a����*/ 		/* �����ڴ�*/ 
	int *b=(int*)malloc(sizeof(int)*n);/*b����*/ 		/* �����ڴ�*/
	int *c=(int*)malloc(sizeof(int)*n);/*c����*/ 		/* �����ڴ�*/
	int *d=(int*)malloc(sizeof(int)*n);/*d����*/ 		/* �����ڴ�*/
	creat_list(&head,n);									/*�������� */
	putchar('\n'); 
	average(head,n);										/* ��ÿ�ſ�ƽ��*/
	rank(head,n,a,b,c,d); 									/* ����*/
	printf("��ѧ��߷֣�");								/* ��ѧ��߷�*/
	printfmath(head,a[0]);
	printf("������߷֣�");								/* ������߷�*/
	printfphy(head,b[0]);
	printf("Ӣ����߷֣�");								/*Ӣ����߷� */
	printfeng(head,c[0]);
	printf("c������߷֣�");								/* c������߷�*/
	printfc(head,d[0]); 
	free_list(&head); 										/*�ͷ����� */
} 
void creat_list(Node** head,int n)					/*����n���ڵ������*/ 
												/*����һ������ָ�룬Ҫ��ͷָ�����*/ 
{
	int i;
	Node* temp;
	for(i=0;i<n;i++){
		
		Node* node=(Node*)malloc(sizeof(Node));/*create new node*/
		printf("ѧ�ţ�");									/*ѧ��*/ 
		scanf("%d",&node->num);
		printf("���֣�");									/*����*/ 
		scanf("%s",node->s);
		printf("��ѧ��");
		scanf("%d",&node->math);							/*������ѧ*/
		printf("����");
		scanf("%d",&node->phy);							/*��������*/
		printf("Ӣ�");
		scanf("%d",&node->eng);							/*����Ӣ��*/
		printf("c���ԣ�");
		scanf("%d",&node->c);							/*����c*/
		for(m=0;m<40;m++){
			printf("*");
		}
		putchar('\n');
		node->next=NULL;
		
		if(*head==NULL){
			*head=node;
			temp=*head;
		}else{
			temp->next=node;
			temp=temp->next;
		}
	} 
}

void average(Node* head,int n)								/*��ƽ����*/
{
	Node* temp=head;
	float a=0,b=0,c=0,d=0;
	while(temp!=NULL){
		a+=temp->math;
		b+=temp->phy;
		c+=temp->eng;
		d+=temp->c;
		temp=temp->next; 
	}
	printf("��ѧ����%.1f\n�������%.1f\nӢ�����%.1f\nc���Ծ���%.1f\n"
	,a/n,b/n,c/n,d/n);
	for(m=0;m<40;m++){
			printf("*");
		}
	putchar('\n');
}

void rank(Node* head,int n,int *a,int *b,int *c,int* d)/*����*/ 
{

	int i;
	int num=n;
	Node* temp=head;
	for(i=0;i<n;i++){
		a[i]=temp->math;
		b[i]=temp->phy;
		c[i]=temp->eng;
		d[i]=temp->c;
		temp=temp->next;
	}
	printf("��ѧ����\n");
	f(a,num);
	putchar('\n'); 
	printf("��������\n");
	f(b,num);
	putchar('\n');
	printf("Ӣ������\n");
	f(c,num);
	putchar('\n');
	printf("c��������\n");
	f(d,num);
	putchar('\n');
	for(m=0;m<40;m++){
			printf("*");
		}
	putchar('\n');
}
void f(int *a,int n)											/*rank����*/ 
{
	int i,j;
	int t;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(a[j]>a[i]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d	",a[i]);
}
void printfmath(Node* head,int n)					/*�����ѧ��߷�name   ѧ�� */
{
	Node* temp=head;
	while(temp!=NULL){
		if(temp->math==n){
			printf("\nnumber   %d\tname   %s\n",temp->num,temp->s);
		}
		temp=temp->next;
	}
	for(m=0;m<30;m++){
			printf("*");
		}
	putchar('\n');
}
void printfphy(Node* head,int n)			/*�����ѧ��߷�name   number   */ 
{
	Node* temp=head;
	while(temp!=NULL){
		if(temp->phy==n){
			printf("\nnumber   %d\tname   %s\n",temp->num,temp->s);
			
		}
		temp=temp->next;
	}
	for(m=0;m<30;m++){
			printf("*");
		}
	putchar('\n');
}
void printfeng(Node* head,int n)			/*�����ѧ��߷�name   number    */
{
	Node* temp=head;
	while(temp!=NULL){
		if(temp->eng==n){
			printf("\nnumber   %d	name   %s\n",temp->num,temp->s);
		}
		temp=temp->next;
	}
	for(m=0;m<30;m++){
			printf("*");
		}
	putchar('\n');
}
void printfc(Node* head,int n) 			/*�����ѧ��߷�name   number    */
{
	Node* temp=head;
	while(temp!=NULL){
		if(temp->c==n){
			printf("\nnumber   %d\tname   %s\n",temp->num,temp->s);
		}
		temp=temp->next;
	}
	for(m=0;m<30;m++){
			printf("*");
		}
	putchar('\n');
}
void free_list(Node** head)									/*�ͷ��б�*/
{
	Node* temp=*head;
	Node* prev;
	while(temp!=NULL){
		prev=temp;
		temp=temp->next; 
		free(prev);
	}
		putchar('\n');
		putchar('\n');
		for(m=0;m<37;m++){
		printf("*");
	}
	printf("��������") ;
	for(m=0;m<37;m++){
		printf("*");
	}
}	

