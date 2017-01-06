//调用totaller.h文件；对应编译器是count_price

#include <stdio.h>
#include <limits.h>
#include <float.h>//<>是在标准库代码所在目录查找头文件
#include "totaller.h"
//""是在本地查找文件

float total = 0.0; 
short count = 0; 
short tax_percent = 6;


int main() 
{
	printf("The value of INT_MAX is %i\n", INT_MAX); 
	printf("The value of INT_MIN is %i\n", INT_MIN); 
	printf("An int takes %lu bytes\n", sizeof(int));
	printf("The value of FLT_MAX is %f\n", FLT_MAX); 
	printf("The value of FLT_MIN is %.50f\n", FLT_MIN); 
	printf("A float takes %lu bytes\n", sizeof(float));//书上是％z，这里提醒有％lu
	float val; 
	printf("Price of item: ");
	while (scanf("%f", &val) == 1) {//ctrl+d退出
		printf("Total so far: %.2f\n", add_with_tax(val)); 
		printf("Price of item: ");
	}
	printf("\nFinal total: %.2f\n", total); 
	printf("Number of items: %hi\n", count); 
	return 0;
}
    
float add_with_tax(float f)
{
	float tax_rate = 1 + tax_percent / 100.0; 
	total = total +(f* tax_rate);
    count = count + 1;
    return total;
}






