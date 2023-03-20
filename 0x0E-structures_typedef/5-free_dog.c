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
	free(d->owner);
	free(d->name);
	free(new_dog);
}
