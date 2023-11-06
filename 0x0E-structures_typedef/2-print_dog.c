#include "dog.h"

/**
 * print_dog -  prints a struct dog
 * @d: pointer to dog
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		printf("Name: (ni)l\nAge: %f\nOwner: %s\n", d->age, d->owner);
	}
	else if (d->owner == NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: (nil)\n", d->name, d->age);
	}
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}

