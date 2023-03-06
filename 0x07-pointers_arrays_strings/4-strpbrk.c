#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - locate first occurance in string
 * @s: inpu string
 * @accept: input string
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	char *n = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		s++;
		accept = n;
	}
	return (NULL);
}
