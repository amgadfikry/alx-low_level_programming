#include "main.h"
/**
 * _strcat - concate two string
 * @dest: input str 1
 * @src: input str 2
 * Return: pointer to result
 */
char *_strcat(char *dest, char *src)
{
	int num_dest = 0;
	int num_src = 0;
	int i = 0;
	int j = 0;
        int x;
	int y = 0;

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
	for (x = num_dest; x <= num_dest + num_src; x++)
	{
		if (x == num_dest + num_src)
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
