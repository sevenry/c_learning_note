#include <stdio.h>
#include <stdlib.h> //这里创建一个结构体用来表示链表的结点类型 

struct node
{
	int data;
    struct node *next;
};

int main() 
{
	struct node *head,*p,*q,*t; 
	int i,n,a;
	puts("whole numbers is :");
	scanf("%d",&n);
	head = NULL;//头指针初始为空 
	puts("give the numbers:");
	for(i=1;i<=n;i++)//循环读入n个数 
	{
		scanf("%d",&a);
		p=(struct node *)malloc(sizeof(struct node)); 
		p->data=a;//将数据存储到当前结点的data域中 
		p->next=NULL;//设置当前结点的后继指针指向空,也就是当前结点的下一个结点为空 
		if(head==NULL)
			head=p;//如果这是第一个创建的结点,则将头指针指向这个结点 
		else
			q->next=p;//如果不是第一个创建的结点,则将上一个结点的后继指针指向当前结点 
		q=p;//指针q也指向当前结点
	}

	puts("insert the num:");
	scanf("%d",&a);
	t=head; 
	while(t!=NULL)
	{
		if(t->next->data>a)
		{
			p=(struct node *)malloc(sizeof(struct node));
			p->data=a; 
			p->next=t->next;//新增结点的后继指针指向当前结点的后继指针所指向的结点
			t->next=p;
			break;
		}
		
		t=t->next;//继续下一个结点 
	}

	t=head; 
	while(t!=NULL)
	{
        printf("%d ",t->data);
        t=t->next;//继续下一个结点 
    }
    getchar();getchar();
    return 0; 
}











