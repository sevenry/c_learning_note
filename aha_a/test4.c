#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,d,max;
	scanf("%d %d %d",&a,&b,&d);
	if (a%2 ==0)
		printf("yes");
	else
		printf("no");
	if (a>b) c=a;
	else c=b;
	printf("%d\n",c);
	if (a%b==0) printf("www\n");
	else printf("nnono\n");
	if (a>=b && a>=d) printf("%d\n", a);
	if (b>=a && b>=d) printf("%d\n", b);
	if (d>=a && d>=b) printf("%d\n", d);
	
	printf("begin new story\n");
	if (a<b) 
		max = b;
		b =a ;
		a=max;
	if (a<d) {max=d,d=a,a=max;}
	if (b<d) {max=d,d=b,b=max;}
	printf("%d %d %d \n",a,b,d );

	if (0) printf("yes1\n");
	else printf("no1\n");
	if (1>2) printf("yes2\n");
	else printf("no2\n");
	if (5) printf("yes3\n");
	else printf("no3\n");
	if (-5) printf("yes4\n");
	else printf("no4\n");
 	return 0; 

	
}
	