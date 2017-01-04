#include <stdio.h>
int main()
{
    int data[101],right[101];
    int i,n,t,len; //读入已有的数 
    puts("whole numbers:");
    scanf("%d",&n); 
    puts("give the numbers:");
    for(i=1;i<=n;i++)
    	scanf("%d",&data[i]);
	len=n;

	for(i=1;i<=n;i++) 
	{
	    if(i!=n)
	        right[i]=i+1;
    	else
        	right[i]=0;
	} 

	len++; 
	puts("insert a number:");
	scanf("%d",&data[len]);

//  3 5 6 8 9 2 //data
//k 1 2 3 4 5 
//1 2 3 4 5 0

	if (data[1]>data[len])
	{
		t=len;
		right[len]=1;
		while(t!=0)
		{
			printf("%d ",data[t]);
    		t=right[t];
		}
	}
	else
	{
		t=1;
		int key=0;//利用key来检测插入值是否小于最大值，如果key值不变
		//则在末尾修改right序列即可。
		puts("why");
		while(t!=0)
		{

			if(data[right[t]]>data[len])//这里需要注意，只有当插入的数至少大于第一个数的时候才成立。
			//如果起始值就大于插入值，依旧会将插入之放在起始值之后。
			{
				key=1;
				right[len]=right[t];//新插入数的下一个结点标号等于当前结点的下一个结
				right[t]=len;//当前结点的下一个结点编号就是新插入数的编号
				break;//插入完成跳出循环 
			}
    		t=right[t];
    	}
    	if (key<1)
    	{
    		right[n]=len;
    		right[len]=0;
    	}

    	t=1;
		while(t!=0)
		{
			printf("%d ",data[t]);
    		t=right[t];
		}
	}
	getchar();
    getchar();
    return 0;
}