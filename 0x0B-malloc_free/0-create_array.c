#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - create array of char by malloc
 * @size: int input
 * @c: char input
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
