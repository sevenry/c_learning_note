#include <stdio.h>

typedef struct {
	char *description;  
	float value;
} swag;

typedef struct 
{
	swag *sw;//这里sw是指针，所以传入的是指针。
	const char *sequence;
} combination ;
	
typedef struct { 
	combination numbers; 
	const char *make;
} safe;

int main()
{
	swag gold = {"GOLD!", 1000000.0}; 
	combination numbers = {&gold, "6502"}; 
	safe s = {numbers, "RAMACON250"};
	printf("contents=%s\n",s.numbers.sw->description);
	//这里到达sw的是一个指针，用“指针->字段”得到字段内容。
}


