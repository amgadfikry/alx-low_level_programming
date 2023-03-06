#include "main.h"
/**
 * _strchr - locate character in string
 * @s: string input
 * @c: char input
 * Return: location
 */
char *_strchr(char *s, char c)
{
	char *x;

	while (*s)
	{
		if (*s == c)
		{
			x = s;
			break;
		}
		s++;
	}
	
	return (x);
}
