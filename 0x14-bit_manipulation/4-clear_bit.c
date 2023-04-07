#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - set value of bit to 0 at given index
 * @n: number to change it
 * @index: index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int t = 0;

	if (index > 31)
		return (-1);

	t = t | 1;
	t = t << index;

	*n = *n & t;

	return (1);
}
