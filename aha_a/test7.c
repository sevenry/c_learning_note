#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	int i,j;
	for (i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			printf("%d*%d=%d  ",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}

int main()
{
	int i,j,k;
	for (i=1;i<=5;i++)
	{
		j=5-i;
		for (k=1;k<=j;k++)
		{
			printf(" ");
		}
		for (k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i=4;i>=1;i--)
	{
		j=5-i;
		for (k=1;k<=j;k++)
		{
			printf(" ");

		}
		for (k=1;k<=2*i-1;k++)
		{
			printf("*");

		}
		printf("\n");
	}



	return 0;
}
