#include <stdio.h>

void go_east(int lat, int lon)//如果这样写的话，在主函数调用该函数时，
//相当于是把主函数中输入的两个变量的数值传入，在这个函数中，lat，lon变量的值发生改变；
//但是对于主函数中两个变量本身没有改变。
{
	lat = lat-1;
	lon = lon-1;
}

void go_south( int *lat, int *lon)
{
	*lat=*lat-1;
	*lon=*lon+1;
}

void forturne(char msg[])
{
	printf("the answer is %p\n",msg);//代表add字符串第一个字符h的地址
	printf("the r is %s\n",msg);
	printf("lenth is %i\n", sizeof(msg));//8  把数组传递给函数,数组退化为指针,
	//所以这里给出的是指针的地址类似于下方的t。
}

int main()
{

	char masked_raider[] = "Alive";
	char *jimmy = masked_raider;//jimmy作为地址存储了mask这个变量的值，所以变量改变，jimmy这个地址中的数值页随之改变。
	printf("Masked raider is %s, Jimmy is %s\n", masked_raider, jimmy); masked_raider[0] = 'D';
	masked_raider[1] = 'E';
	masked_raider[2] = 'A';
	masked_raider[3] = 'D';
	masked_raider[4] = '!';
	printf("Masked raider is %s, Jimmy is %s\n", masked_raider, jimmy); 
	return 0;


	char a[3];//这里是数组，所以调用scanf函数时接收的是指针。
	scanf("%2s",a);
	int c;//这里是数值，所以接收时需要加&运算符，接收地址才能在函数中调用。
	scanf("%i",&c);
	char food[5];
	printf("print the food\n");
	fgets(food,4,stdin);//没反应。？？

	int conte[]={1,2,3};
	int *choice = conte;
	conte[0]=2;
	conte[1]=conte[2];
	//printf("%d %d %d\n",conte[0],conte[1],conte[2]);
	conte[2]=*choice;
	//printf("%d %d %d\n",conte[0],conte[1],conte[2]);
	//printf("choose %i male guest\n",conte[2]);
	
	char add[]="happy together!";
	char *t =add;
	//forturne(add);
	//printf("add lenth is %i\n", sizeof(add));//16
	//printf("add lenth is %i\n", sizeof(t));//8

	printf("address is %p\n",add);
	printf("address is %p\n",add+1);//+1
	printf("address is %p\n",conte);
	printf("address is %p\n",conte+1);//+4

	int lati=32;
	int longi=-64;
	go_south(&lati,&longi);
	printf("stop! the present addressis [%i,%i]\n",lati,longi);
	return 0;
}


