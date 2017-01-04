//小猫钓鱼
#include <stdio.h>
#include <string.h>
struct queue
{
    int data[1000];
    int head;
    int tail;
};

struct stack
{
    int data[10];
    int top; 
};

int main(int argc,char *argv[]) //接收参数，控制两个人手中总牌数。
{
    struct queue q1,q2;
    struct stack s;
    int book[10];
    int i,t;
    q1.head=1; q1.tail=1;
    q2.head=1; q2.tail=1;
	s.top=0; //初始化用来标记的数组,用来标记哪些牌已经在桌上 
	for(i=1;i<=9;i++)
		book[i]=0;
	printf("允许输入的牌数%s\n",argv[1] );//这里需要注意的是，接收参数的序列号从1开始。

	puts("person heng owns the cards:");
	for(i=1;i<=atoi(argv[1]);i++) {//接收的参数是char，需要转换成int格式。
        scanf("%d",&q1.data[q1.tail]);
		q1.tail++; 
	}
	puts("person ha onws the cards:");
	for(i=1;i<=argv[1];i++) {
        scanf("%d",&q2.data[q2.tail]);
		q2.tail++; 
	}

	while(q1.head<q1.tail && q2.head<q2.tail ) //当队列不为空的时候执行循环 
	{
		t=q1.data[q1.head];//小哼出一张牌 //判断小哼当前打出的牌是否能赢牌 
		if(book[t]==0) 
		{
			q1.head++; //小哼已经打出一张牌,所以要把打出的牌出队 
			s.top++;
			s.data[s.top]=t; //再把打出的牌放到桌上,即入栈 
			book[t]=1; //标记桌上现在已经有牌面为t的牌
		}
		else 
		{
			q1.head++;//小哼已经打出一张牌,所以要把打出的牌出队 
			q1.data[q1.tail]=t;//紧接着把打出的牌放到手中牌的末尾 
			q1.tail++;
			while(s.data[s.top]!=t) //把桌上可以赢得的牌依次放到手中牌的末尾 
			{
				book[s.data[s.top]]=0;//取消标记 
				q1.data[q1.tail]=s.data[s.top];//依次放入队尾 
				q1.tail++;
				s.top--; //栈中少了一张牌,所以栈顶要减1
			} 
		}

		t=q2.data[q2.head]; //小哈出一张牌 //判断小哈当前打出的牌是否能赢牌 
		if(book[t]==0) //表明桌上没有牌面为t的牌 
		{
			q2.head++; //小哈已经打出一张牌,所以要把打出的牌出队 
			s.top++;
			s.data[s.top]=t; //再把打出的牌放到桌上,即入栈 
			book[t]=1; //标记桌上现在已经有牌面为t的牌
		} 
		else 
		{
			q2.head++;//小哈已经打出一张牌,所以要把打出的牌出队 
			q2.data[q2.tail]=t;//紧接着把打出的牌放到手中牌的末尾 
			q2.tail++;
			while(s.data[s.top]!=t) //把桌上可以赢得的牌依次放到手中牌的末尾 
			{
				book[s.data[s.top]]=0;//取消标记
				q2.data[q2.tail]=s.data[s.top];//依次放入队尾 
				q2.tail++;
				s.top--;
			} 
		}
	}

	if(q2.head==q2.tail)
	{
		printf("小哼win\n"); 
		printf("小哼当前手中的牌是"); 
		for(i=q1.head;i<=q1.tail-1;i++)
			printf(" %d",q1.data[i]); 
		if(s.top>0) //如果桌上有牌则依次输出桌上的牌 
		{
			printf("\n桌上的牌是"); 
			for(i=1;i<=s.top;i++)
				printf(" %d",s.data[i]); 
		}
		else
			printf("\n桌上已经没有牌了");
	} 
	else
	{
		printf("小哈win\n"); 
		printf("小哈当前手中的牌是"); 
		for(i=q2.head;i<=q2.tail-1;i++)
			printf(" %d",q2.data[i]); 
		if(s.top>0) //如果桌上有牌则依次输出桌上的牌 
		{
			printf("\n桌上的牌是"); 
			for(i=1;i<=s.top;i++)
				printf(" %d",s.data[i]); 
		}
		else
			printf("\n桌上已经没有牌了");
	}

    getchar();getchar();
	return 0; 
}
























