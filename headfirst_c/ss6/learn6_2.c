#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char *name; 
	char *opens; 
	char *closes;
	struct island *next;//这里设定接收的next是一个指针
} island;

island * create(char *name) //返回值为指针
{
	island *i = malloc(sizeof(island)); 
	i->name = strdup(name);
	i->opens = "09:00";
	i->closes = "17:00";
	i->next = NULL;
	return i; 
}

void display(island *start) //这里接收的start是指针
{
	island *i = start;//这里不是很懂啊，i应该是指针，将*i创建成island，赋值的
	//start也是指针。这里等于是创建i作为island的指针，存储的内容和start中存储的一样。
	for (; i!=NULL ; i=i->next){
		printf("Name: %s\n open: %s-%s\n",i->name,i->opens,i->closes);
	}
} 

void release(island *start) 
{
	island *i = start;
	island *next = NULL;
	for (; i != NULL; i = next) 
	{
		next = i->next;
		free(i->name);
		free(i);
	} 
}

int main()
{
	/*
	这是329页代码
	char name[80];
	fgets(name,80,stdin);
	island *p_island0 = create(name);//create返回指针，所以接收时用指针接收。
	fgets(name, 80, stdin);
	island *p_island1 = create(name);
	p_island0->next = p_island1;
	display(p_island0);
	return 0;*/

	island *start = NULL; 
	island *i = NULL; 
	island *next = NULL; 
	char name[80];
	
	/*int k,n;
	puts("give the numbers");
	scanf("%i",&n);
	puts("give the names");
	for(k=0;k<=n;i=next)
	{
		scanf("%s",name);
		//fgets(name, 80, stdin);//直接终端输入用fgets，则第一个名字为空，所以改用scanf
		next = create(name); 
		if (start == NULL)
			start = next;
		if (i != NULL)
			i->next=next;
		k=k+1;//原来的方式无法停止输入，设置变量k进行调整。
	}*/

	for(;fgets(name, 80, stdin)!=NULL;i=next)//直接读入txt文件的时候是可以的。
	{
		next = create(name); 
		if (start == NULL)
			start = next;
		if (i != NULL)
			i->next=next;
	}		
    display(start);
    release(start);
}






