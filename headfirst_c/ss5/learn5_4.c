#include <stdio.h>

typedef struct {
	const char *name; 
	const char *species; 
	int age;
} turtle;

void happy_birthday(turtle *t) //这里传入参数是t，对t进行*运算符，得到地址内容
{
	(*t).age = (*t).age + 1;//这里需要注意的是，(*t)要有括号，t是指针，用*读取地址内容
	printf("Happy Birthday %s! You are now %i years old!\n",
		(*t).name, (*t).age); 
}

void happy_birthday1(turtle t) 
{
	t.age = t.age + 1;
	printf("Happy Birthday %s! You are now %i years old!\n",
		t.name, t.age); 
}

int main() 
{
	turtle myrtle = {"Myrtle", "Leatherback sea turtle", 99}; 
	//happy_birthday1(myrtle);
	happy_birthday(&turtle);//新的函数里接受的是指针，所以用&运算符得到变量地址。
	printf("%s's age is now %i\n", myrtle.name, myrtle.age); 
	return 0;
}





