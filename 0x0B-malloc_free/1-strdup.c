#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - pointer new allocated memory
 * @str: input arr
 * Return: null or pointer
 */
char *_strdup(char *str)
{
	int size = 0, i = 0;
	char *p;

	if (str == NULL)
		return (NULL);	

	while (*str)
	{
		size++;
		str++;
	}
	p = malloc(sizeof(char) * (size + 1));

	if (p == NULL)
		return (NULL);

	while (i < size)
	{
		p[i] = str[i];
		i++;
	}
	
	return (p);
}
