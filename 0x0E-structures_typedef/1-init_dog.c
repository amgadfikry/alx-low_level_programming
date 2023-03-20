#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - init structure
 * @d: structure pointer
 * @name: char pointer
 * @age: input float
 * @owner: char pointer
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = *name;
	d->age = age;
	d->owner = *owner;
	exit(1);
}
