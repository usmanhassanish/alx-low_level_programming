#ifndef _dog_
#define _dog_
#include <stdio.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * struct dog - defines a struct named dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
