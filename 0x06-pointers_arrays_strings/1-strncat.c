#include "main.h"
/**
 * _strncat - concate two string
 * @dest: input str
 * @src: input str
 * @n: input int
 * Return: pointer to result
 */
char *_strncat(char *dest, char *src, int n)
{
	int num_dest = 0;
	int num_src = 0;
	int i = 0, j = 0; y = 0, x, z = n;

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
	{
		z = num_src;
	}

	for (x = num_dest; x < (num_dest + n); x++)
	{
		if (y == n)
		{
			dest[x] = '\0';
		}
		else
		{
			dest[x] = src[y];
			y++;
		}
	}

	return (dest);
}
