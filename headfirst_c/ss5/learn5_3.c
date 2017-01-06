#include <stdio.h>

typedef struct { 
	float tank_capacity;
	int tank_psi;
	const char *suit_material;
}equipment;

typedef struct scuba{//这里scuba加不加都无所谓 
	const char *name;
	equipment kit;
} diver;

void badge(diver d) 
{
	printf("Name: %s Tank: %2.2f(%i) Suit: %s\n",
		d.name, d.kit.tank_capacity, d.kit.tank_psi, d.kit.suit_material);
}

int main() 
{
	//struct scuba randy = {"randy",{5.5,3500,"neoprene"}};
	diverrandy = {"randy",{5.5,3500,"neoprene"}};//两句一个效果
	badge(randy);
	return 0; 
}





