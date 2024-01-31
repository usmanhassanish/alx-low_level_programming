#include "dog.h"

/**
 * print_dog - prints the elements of a dog
 * @d: dog structure
 *
 * Description: This function prints the elements of a dog structure.
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
    {

    }
    else
    {
        if (d->name == NULL)
            printf("Name: (nil)\n");
        else
            printf("Name: %s\n", d->name);

        if (d->age == NULL)
            printf("Age: (nil)\n");
        else
            printf("Age: %f\n", d->age);

        if (d->owner == NULL)
            printf("Owner: (nil)\n");
        else
            printf("Owner: %s\n", d->owner);
    }
}
