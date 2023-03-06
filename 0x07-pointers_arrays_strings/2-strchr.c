#include "main.h"
#include <stdio.h>
/**
 * _strchr - locate character in string
 * @s: string input
 * @c: char input
 * Return: location
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);

	return (NULL);
}
