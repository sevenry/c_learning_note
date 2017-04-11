#include <stdio.h>
#include <stdlib.h>
int main()
{ 
	int x,i,ans;
	scanf("%d",&x);
	i=1;
	ans=1;
	while(i<=x)
	{
		ans=ans*i;
		i+=1;
	}
	printf("%d\n", ans);
	return 0;
	int a,s,ns;
	s=0;
	a=1;
	ns=0;
	while (a<=100)
	{
		s=s+a;
		a=a+1;
	}
	printf("%d\n", s);

	while (a<100)
	{
		if (a%3==0 && a%5!=0)
			printf("%d\n", a);
		a=a+1;
	}
	while (a>0)
	{
		if (a%3!=0 && a%5==0)
			printf("%d\n",a );
		a=a-1;

	}
		printf("begin the new game\n");
	while (a<=100)
	{
		if (a%7==0 || a%10==7)
			ns=ns+a;
			
		a=a+1;
	}
	printf("%d\n",ns );
	return 0 ;


}