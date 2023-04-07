#include "main.h"
#include <stdlib.h>
/**
 * get_bit - get value of bit at given index
 * @n: number to search in it
 * @index: index return its results
 * Return: result 0 or 1 bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	while (n > 0)
	{
		if (index == i)
			return (n & 1);
		n = n >> 1;
		i++;
	}

	return (-1);
}
