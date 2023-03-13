#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_arrary - create array of char
 * @size: int input
 * @c: char input
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	while (i < size)
		arr[i] = c;
	return (arr);
}
