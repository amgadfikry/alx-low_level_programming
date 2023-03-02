#include "main.h"
/**
 * string_toupper - to uppercase all letters
 * @s: input string
 * Return: uppercase
 */
char *string_toupper(char *s)
{
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}

	return (*s);
}
