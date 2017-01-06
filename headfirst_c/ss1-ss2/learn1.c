#include <stdio.h>


int main()
{
	
	char card_name[3];
	puts("print the name");
	scanf("%2s",card_name);
	printf("%s\n",card_name );
	int a;
	scanf("%d",&a);
	do{
		printf("%d\n", a);
		a=a-1;
	}while(a>1);
	return 0;

}
