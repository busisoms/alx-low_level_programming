#include "dog.h"
#include <string.h>

/**
 * *new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the good boy
 *
 * Return: pointer to new good boy
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}

	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);

	if (d->name == NULL || d->owner == NULL)
	{
		free(d);
		return (NULL);
	}

	return (d);
}