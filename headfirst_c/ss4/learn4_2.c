
//编译文件count_time
#include <stdio.h>

int mercury_day_in_earth_days(); 
int hours_in_an_earth_day();
int main() 
{
	float length_of_day = mercury_day_in_earth_days(); 
	//注意，这里如果是int length_of_day，将不会有提醒，即得到float，存储int，会产生不准确的问题但不报错
	//但是如果不提前声明，默认接收的是int类型，而存储float类型，则会出错。
	//如果提前声明了是int，存储float，也没问题。
	int hours = hours_in_an_earth_day();
	//这里如果不提前声明，则只会警告。因为系统默认返回的是int，因此不会出错。
	float day = length_of_day * hours;
	

	printf("水星上一天有 %f 小时\n", day);
	return 0; 
}

int mercury_day_in_earth_days() 
{
	return 58; 
}

int hours_in_an_earth_day() 
{
	return 24; 
}

//小结：声明与实际如果相符的话，则唯一的问题是，声明了float而存储int，使得不够准确
//如果没有加声明，实际的是int也没有问题。只有当实际返回float才会报错。