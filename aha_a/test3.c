#include <stdio.h>
int main()
{
	float a;
	a=3.141592653589;
	printf("%f",a);
	printf("\n%.15f",a);
	double b;
	b = 3.141592653589;
	printf("\n%.15lf",b);
	
	char d,e;
	printf("\n****\n");
	scanf("%c %c",&d,&e);
	printf("the char is %c",d);
	printf("\nhhhh");
	char f;
	scanf("%c",&f);
	printf("\nprint the after is %c",f+1);
	return 0 ; 
	
}
	