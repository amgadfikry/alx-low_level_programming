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
	int i = 0;
	char *c = s;

	while (i < n)
	{
		c[i] = b;
		i++;
	}

	return (c);
}
