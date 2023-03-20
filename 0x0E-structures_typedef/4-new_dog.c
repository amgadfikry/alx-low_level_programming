#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * string_len - give length of string
 * @s: string pointer
 * Return: length
 */
int string_len(char *s)
{
	char *p = s;
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	s = p;

	return (len);
}
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
	char *cname, *cowner;
	int i = 0;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	cname = malloc(sizeof(char) * (string_len(name) + 1));
	if (cname == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	cowner = malloc(sizeof(char) * (string_len(owner) + 1));
	if (cowner == NULL)
	{
		free(cname);
		free(new_dog);
		return (NULL);
	}
	while (i < string_len(name))
	{
		cname[i] = name[i];
		i++;
	}
	cname[i] = '\0';
	i = 0;
	while (i < string_len(owner))
	{
		cowner[i] = owner[i];
		i++;
	}
	cowner[i] = '\0';
	new_dog->name = cname;
	new_dog->age = age;
	new_dog->owner = cowner;

	return (new_dog);
}
