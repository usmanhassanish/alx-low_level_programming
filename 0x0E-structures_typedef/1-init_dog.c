#include "dog.h"
/**
 * init_dog - initialize a new dog
 * @d: dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
        d = malloc(sizeof(struct dog));

        if (d != NULL)
        {
                d.name = name;
                d.age = age;
                d.owner = owner;
        }
        else
        {
                return;
        }
}
