#include "main.h"
/**
 * string_toupper - to uppercase all letters
 * @s: input string
 * Return: uppercase
 */
char *string_toupper(char *s)
{
	int num = 0, i = 0;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}

	return (s);
}
