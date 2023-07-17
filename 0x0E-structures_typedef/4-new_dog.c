#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int nm, ow, i;
	dog_t *d;

	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	nm = ow = 0;
	while (name[nm++])
		;
	while (owner[ow++])
		;
	d->name = malloc(nm * sizeof(d->name));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i <= nm; i++)
		d->name[i] = name[i];
	d->age = age;
	d->owner = malloc(ow * sizeof(d->owner));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i <= ow; i++)
		d->owner[i] = owner[i];
	return (d);
}
