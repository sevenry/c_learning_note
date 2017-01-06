#include <stdio.h>

typedef union//这里用union或者struct都可以。 
{
	float weight;	
}quantity;

typedef struct {
	const char *name; 
	const char *country; 
	quantity amount;
} fruit_order;

int main(){
	fruit_order apples = {"apples", "England", .amount.weight=4.2};
	printf("This order contains %2.2f lbs of %s\n", 
		apples.amount.weight, apples.name);


}






