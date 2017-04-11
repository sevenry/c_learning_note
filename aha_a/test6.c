#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	int i,j,num;
	i = 1;
	num =1;
	while (i<=5)
	{
		j=1;
		while (j<=i)
		{
			printf("%d ",num);
			num=num+1;
			j++;
		}
		printf("\n");
		i=i+1;
	}
	return 0;
	
	int a,b;
	a = 0;
	while(a<=2)
	{
		system("clear");
		b=1;
		while(b<=a)
		{
			printf(" ");
			b=b+1;		
		}
		printf(" O\n");
		printf("<H>\n");
		printf("I I\n");
		fflush(stdout);
		sleep(1);

		a=a+1;

	}
	return 0;
}
