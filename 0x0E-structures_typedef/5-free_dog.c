#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - free dogs function
 * @d: pointer struct
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->owner != NULL)
			free(d->owner);
		if (d->name != NULL)
			free(d->name);
		free(d);
	}
}
