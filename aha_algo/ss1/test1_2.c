#include <stdio.h>

//冒泡法
int main()
{
	int a[100],i,j,t,n;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];a[j]=a[j+1];a[j+1]=t;
			}
		}
	}
	for(i=1;i<=n;i++)
		printf("time i is %d \n",a[i]);
	return 0;

}


struct student
{
	char name[21];
	int score;
};
int main()
{
	struct student a[100],t;
	int i,j,n;
	puts("number is:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		scanf("%20s %d",a[i].name,&a[i].score);
	for (i=1;i<=n-1;i++)
	{
		for (j=1;j<=n-i;j++)
		{
			if(a[j].score<a[j+1].score)
				{t=a[j];a[j]=a[j+1];a[j+1]=t;}
		}
		
	}
	for(i=1;i<=n;i++)
		printf("%s %d\n",a[i].name,a[i].score );
	return 0;
}