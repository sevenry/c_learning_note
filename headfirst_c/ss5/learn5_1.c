
#include <stdio.h>  

struct fish 
{
	const char *name; 
	const char *species; 
	int teeth;
	int age;
	int favorite_music;
};

void catalog(struct fish f)
{
	printf("%s is a %s with %i teeth. He is %i\n",f.name, f.species, f.teeth, f.age); 
}

void label(struct fish f)
{
	printf("Name:%s\nSpecies:%s\n%i years old, %i teeth\n",f.name, f.species, f.teeth, f.age); 
}
void catalog1(const char *name, const char *species, int teeth, int age)
{
	printf("%s is a %s with %i teeth. He is %i\n",name, species, teeth, age); 
}

void label1(const char *name, const char *species, int teeth, int age)
{
	printf("Name:%s\nSpecies:%s\n%i years old, %i teeth\n",name, species, teeth, age); 
}

int main() 
{
	struct fish Snappy={"Snappy", "Piranha", 69, 4};
	catalog(Snappy); 
	label(Snappy); 
	return 0;
}





