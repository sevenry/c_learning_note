// 栈 猜密码题
#include <stdio.h>
int main()
{
	int q[102]={0,6,3,1,7,5,8,9,2,4},head,tail; 
	int i;
	head=1;
	tail=10; //队列中已经有9个元素了,tail指向队尾的后一个位置 
	while(head<tail) //当队列不为空的时候执行循环
	{
		printf("%d ",q[head]); 
		head++;
		q[tail]=q[head]; 
		tail++;
		head++; }

    getchar();getchar();
	return 0; 
}
