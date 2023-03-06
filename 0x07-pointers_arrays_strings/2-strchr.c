#include "main.h"
/**
 * _strchr - locate character in string
 * @s: string input
 * @c: char input
 * Return: location
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int x;

	while (s[i] != '\0')
	{
		if (s[i] != c)
			return (NULL);
		else
			x = i;
		i++;
	}
	while (*s)
	{
		*s = s[x];
		x++;
		s++;
	}
	return (s);
}
