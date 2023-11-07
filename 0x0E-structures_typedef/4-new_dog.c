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
	d->owner = strdup(owner);

	if (d->name == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	if (d->owner == NULL)
	{
		free(d->owner);
		free(d);
		return (NULL);
	}
	d->age = age;
	return (d);
}
