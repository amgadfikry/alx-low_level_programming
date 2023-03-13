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
	int size = 0, word = 0, count = 0, y = 0;

	if (str == NULL || !*str)
		return (NULL);

	while (*str)
	{
		if (*str != ' ')
			size++;
		str++;
	}
	str = s;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char *) * size + 1);

	if (arr == NULL)
		return (NULL);

	while (*str)
	{
		if (*str != ' ')
		{
			word = 1;
			count++;
		}
		if (*str != ' ' && (*(str + 1) == ' ' || *(str + 1) == '\0'))
		{
			word = 0;
			y++;
		}
		if (word == 0 && count > 0)
		{
			count++;
			arr[y] = malloc(sizeof(char) * count);
			count = 0;
		}
	}

	return (arr);
}
