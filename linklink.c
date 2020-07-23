#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
typedef struct student
{
	int score;
	struct student *next;
}LinkList;
LinkList *create(int n);
void change(LinkList *list,int n);
void delet(LinkList *list, int n);
void insert(LinkList *list, int n);
int main()
{
	LinkList *a = create(3);
	while(a->next != NULL)
	{
		a = a->next;
		printf("%d\n",a->score);
	}
}
LinkList *create(int n){
	LinkList *head,*node,*end;
	head=(LinkList*)malloc(sizeof(LinkList));
	end = head;
	for (int i = 0; i < n; i++)
	{
		node = (LinkList*)malloc(sizeof(LinkList));
		scanf("%d",&node->score);
		end->next=node;
		end = node;
	}
	end->next=NULL;
	return head;
}
void change(LinkList *list,int n) {//n为第n个节点
	LinkList *t = list;
	int i = 0;
	while (i < n && t != NULL) {
		t = t->next;
		i++;
	}
	if (t != NULL) {
		puts("输入要修改的值");
		scanf("%d", &t->score);
	}
	else {
		puts("节点不存在");
	}
}
void delet(LinkList *list, int n) {
	LinkList *t = list, *in;
	int i = 0;
	while (i < n && t != NULL) {
		in = t;
		t = t->next;
		i++;
	}
	if (t != NULL) {
		in->next = t->next;
		free(t);
	}
	else {
		puts("节点不存在");
	}
}
void insert(LinkList *list, int n) {
	LinkList *t = list, *in;
	int i = 0;
	while (i < n && t != NULL) {
		t = t->next;
		i++;
	}
	if (t != NULL) {
		in = (LinkList*)malloc(sizeof(LinkList));
		puts("输入要插入的值");
		scanf("%d", &in->score);
		in->next = t->next;//填充in节点的指针域，也就是说把in的指针域指向t的下一个节点
		t->next = in;//填充t节点的指针域，把t的指针域重新指向in
	}
	else {
		puts("节点不存在");
	}
}