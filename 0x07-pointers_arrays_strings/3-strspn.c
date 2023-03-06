#include "main.h"
/**
 * _strspn - get length of prefix
 * @s: input string
 * @accept: input 
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (*s != ('\n' || ','))
	{
		while (*accept)
		{
			if (*s == *accept)
				i++;
			accept++;
		}
		s++;
	}

	return (i);
}
