#include "main.h"
/**
 * _memcpy - fill memory with copy of bytes
 * @dest: input pointer
 * @src: char input
 * @n: number of byte
 * Return: char after filling
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *c = dest;

	while (n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (c);
}
