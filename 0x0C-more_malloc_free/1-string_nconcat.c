#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_len - length of string
 * @str: string pointer
 * Return: length
 */
int string_len(char *str)
{
	int len = 0;
	while (*str)
	{
		len++;
		str++;
	}

	return len;
}
/**
 * string_nconcat - concate teo strings
 * @s1: input string
 * @s2: input string
 * @n: int of first s2
 * Return: null or pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str1 = s1, *str2 = s2, *p;
	int size1 = 0, i = 0, len;
	unsigned int size2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = string_len(s1);
	size2 = string_len(s2);
	s1 = str1;
	s2 = str2;

	if (n > size2)
		len = size2;
	else
		len = n;

	p = malloc(sizeof(char) * (size1 + len + 1));

	if (p == NULL)
		return (NULL);

	while (i < size1)
	{
		p[i] = s1[i];
		i++;
	}
	while (i < (size1 + len))
	{
		p[i] = s2[i - size1];
		i++;
	}
	p[i] = '\0';

	return (p);
}
