#include <stdio.h>
int main()
{
	int a[11],i,j,t;

	for(i=0;i<=10;i++)
		a[i]=0;

	for (i=1;i<=5;i++)
	{
		scanf("%d",&t);
		a[t]++;
	}

	for(i=0;i<=10;i++)
		for(j=1;j<=a[i];j++)
			printf("%d\n",i);

	getchar();getchar();
	return 0;
}

{
	int a[10],i,j,t,n;

	for(i=0;i<=10;i++)
		a[i]=0;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&t);
		printf("ggg%d\n", i);
		a[t]++;
	}

	for(i=10;i>=0;i--)
		for(j=1;j<=a[i];j++)
			printf("kkkk%d\n",i);

	getchar();getchar();
	return 0;
}
