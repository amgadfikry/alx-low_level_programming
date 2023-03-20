#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * new_dog - create new structure
 * @name: pointer name
 * @age: pointer float
 * @owner: pointer owner
 * Return: pointer to new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cname = name, *cowner = owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return(NULL);
	if (name == NULL || owner == NULL)
		return(NULL);
	new_dog->name = cname;
	new_dog->age = age;
	new_dog->owner = cowner;

	return(new_dog);
}
