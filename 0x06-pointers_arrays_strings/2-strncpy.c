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
	int num_src = 0, num_dest = 0;
	int j = 0, i = 0, x;

	while (dest[i] != '\0')
	{
		i++;
		num_dest++
	}
	while (src[j] != '\0')
	{
		j++;
		num_src++;
	}
	if (n > num_src)
	{
		n = num_src;
		for (x = 0; x < n; x++)
		{
			dest[x] = src[x];
		}
	}
	else if (num_src == 0)
	{
		dest[num_dest] = '\0';
	}
	else
	{
		for (x = 0; x < n; x++)
			dest[x] =src[x];
	}

	return (dest);
}
