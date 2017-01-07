#include <stdio.h>
typedef struct {
	char *name; 
	char *opens; 
	char *closes;
	struct island *next;//这里设定接收的next是一个指针
} island;

void display(island *start) //这里接收的start是指针
{
	island *i = start;//这里不是很懂啊，i应该是指针，将*i创建成island，赋值的
	//start也是指针。这里等于是创建i作为island的指针，存储的内容和start中存储的一样。
	for (; i!=NULL ; i=i->next){
		printf("Name: %s\n open: %s-%s\n",i->name,i->opens,i->closes);
	}
} 

int main()
{
	island amity = {"Amity", "09:00", "17:00", NULL};
	island craggy = {"Craggy", "09:00", "17:00", NULL};
	island isla_nublar = {"Isla Nublar", "09:00", "17:00", NULL}; 
	island shutter = {"Shutter", "09:00", "17:00", NULL}; 
	/*这一段测试和变量关系。可忽略。
	island a = shutter;//这里将a创建为island，其值与shutter一样
	island *aa = &shutter;
	printf("%s\n", a.name);
	printf("hhh%s\n", aa->name);
	island *b = &shutter;//主要是这种方式没看懂。
	char jimmy[]="spas";
	char *d = jimmy;
	printf("%s,%s\n",d,jimmy);

	printf("%s\n", b->name);*/


	amity.next = &craggy;
	craggy.next = &isla_nublar;
	isla_nublar.next = &shutter;
	
	island skull = {"Skull", "09:00", "17:00", NULL}; 
	isla_nublar.next = &skull;
	skull.next = &shutter;
	display(&amity);
	
	return 0;
}//编译会报出warning，不知道是不是头文件没有声明局部变量







