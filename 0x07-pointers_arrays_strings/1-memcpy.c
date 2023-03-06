#include "main.h"
/**
 * _memcpy - fill memory with copy
 * @dest: input pointer
 * @src: char input
 * @n: number of byte
 * Return: char after filling
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		*dest = src[i];
		dest++;
		i++;
	}

	return (dest);
}
