#include "main.h"
#include <stdlib.h>
/**
 * set_bit - set value of bit to 1 at given index
 * @n: number to change it
 * @index: index
 * Return: new result
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int t = *n;
	unsigned int i = 0;

	if (*n == 0)
	{
		*n = *n | 1;
		*n = *n << index;
		return (1);
	}

	while (i <= index)
	{
		if (index == i)
		{
			*n = *n | 1;
			t = t | *n;
			*n = t;
			return (1);
		}
		*n = *n >> 1;
		i++;
	}

	return (-1);
}
