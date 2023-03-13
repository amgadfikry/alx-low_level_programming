#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concate teo strings
 * @s1: input string
 * @s2: input string
 * Return: null or pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *str1 = s1, *str2 = s2;
	int size1 = 0, size2 = 0, i = 0;
	char *p;

	while (*str1)
	{
		size1++;
		str1++;
	}
	while (*str2)
	{
		size2++;
		str2++;
	}

	p = malloc(sizeof(char) * (size1 + size2));

	if (p == NULL)
		return (NULL);

	while (i < size1 - 1)
	{
		p[i] = s[i];
		i++;
	}
	while (i < (size1 + size2))
	{
		p[i] = s[i - (size1 -1)];
		i++;
	}

	return (p);
}
