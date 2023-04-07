#include "main.h"
#include <stdlib.h>
/**
 * get_len - get length of binary code
 * @n: number input
 * Return: length of binary code
 */
unsigned int get_len(unsigned long int n)
{
	unsigned int len = 0;

	while (n != 0)
	{
		n /= 2;
		len++;
	}

	return (len);
}
/**
 * get_bit - get value of bit at given index
 * @n: number to search in it
 * @index: index return its results
 * Return: result 0 or 1 bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len = get_len(n), i = 0;
	int *p;

	p = malloc(sizeof(int) * len);
	if (p == NULL)
	{
		free(p);
		return (-1);
	}

	while (i < len)
	{
		p[i] = n % 2;
		n /= 2;
		if (i == index)
			return (p[i]);
		i++;
	}

	return (-1);
}
