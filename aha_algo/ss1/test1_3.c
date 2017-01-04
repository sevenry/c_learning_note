#include <stdio.h>
//快速排序法

int a[101],n;//定义全局变量,这两个变量需要在子函数中使用

void quicksort(int left,int right)
{
    int i,j,t,temp;
    if(left>right)
		return;
	temp=a[left]; //temp中存的就是基准数 
	i=left;
	j=right;
	while(i!=j)
	{
		while(a[j]>=temp && i<j)
			j--;
    	while(a[i]<=temp && i<j)
	        i++;
		if(i<j)//当哨兵i和哨兵j没有相遇时 
		{
        	t=a[i];
        	a[i]=a[j];
        	a[j]=t;
        }
    }

    a[left]=a[i];
    a[i]=temp;
	quicksort(left,i-1);//继续处理左边的,这里是一个递归的过程
	quicksort(i+1,right);//继续处理右边的,这里是一个递归的过程 
}

int main() 
{
	int i,j,t; //读入数据 
	puts("count the numbers:")
	scanf("%d",&n); 
	for(i=1;i<=n;i++)
		puts("enter the number")
		scanf("%d",&a[i]); 
	quicksort(1,n); 
	for(i=1;i<=n;i++)
        printf("%d ",a[i]);
    getchar();getchar();
	return 0; 
}


