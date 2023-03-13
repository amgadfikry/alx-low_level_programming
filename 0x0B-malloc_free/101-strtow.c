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
	int size = 0, i, x, y;
	int start = 0, end = 0;

	if (str = "" || str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] == " " && str[i + 1] != " ") || str[i] != " ")
			start = 1;
		if (str[i] == " " && str[i - 1] != " ")
			start = 0;
		if (start == 1)
			size++;
		size++;
	}

	arr = malloc(sizeof(char *) * size + 1);

	if (arr == NULL)
		return (NULL);

}				

