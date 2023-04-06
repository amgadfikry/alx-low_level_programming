#include "main.h"
#include <stdlib.h>
/**
 * power - get power of number 2
 * @n: pow number
 * Return: result of power
 */
unsigned long int power(unsigned int n)
{
	unsigned long int sum = 1;
	int i;

	for (i = n; i > 0; i--)
		sum *= 2;

	return (sum);
}
/**
 * set_bit - set value of bit to 1 at given index
 * @n: number to change it
 * @index: index
 * Return: new result
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0, j = 0;
	int p[32];

	if (index > 32)
		return (-1);

	while (i < 32)
	{
		p[i] = *n % 2;
		*n /= 2;
		if (i == index)
			p[i] = 1;
		i++;
	}

	while (j < 32)
	{
		if (p[j] == 1)
			*n += power(j);
		j++;
	}

	return (-1);
}
