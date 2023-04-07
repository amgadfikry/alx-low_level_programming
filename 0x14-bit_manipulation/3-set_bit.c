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
	unsigned long int t = 0;

	if (index > 31)
		return (-1);

	t = t | 1;
	t = t << index;

	*n = t | *n;

	return (1);
}
