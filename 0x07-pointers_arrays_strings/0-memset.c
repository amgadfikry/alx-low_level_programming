#include "main.h"
/**
 * _memset - fill memory with constant byte
 * @s: input pointer
 * @b: char input
 * @n: number of byte
 * Return: char after filling
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *c = s;

	while (n--)
	{
		*s = b;
		s++;
	}

	return (c);
}
