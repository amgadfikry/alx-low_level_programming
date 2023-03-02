#include "main.h"
/**
 * _strncpy - concate two string
 * @dest: input str
 * @src: input str
 * @n: input int
 * Return: pointer to result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int num_dest = 0, num_src = 0;
	int i = 0, j = 0, x;

	while (dest[i] != '\0')
	{
		i++;
		num_dest++;
	}
	while (src[j] != '\0')
	{
		j++;
		num_src++;
	}
	if (n > num_src)
		n = num_src;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
