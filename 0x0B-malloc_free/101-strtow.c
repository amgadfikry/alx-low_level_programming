#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - split strings into words
 * @str: input string
 * Return: pointer to array
 */
char **strtow(char *str)
{
	char **arr;
	char *s = str;
	int size = 0, i, x, y;
	int start = 0, end = 0;

	if (str == NULL)
		return (NULL);

	while (*str)
	{
		if (*str != ' ')
			size++;
		str++;
	}
	str = s

	arr = malloc(sizeof(char *) * size + 1);

	if (arr == NULL)
		return (NULL);

}				

