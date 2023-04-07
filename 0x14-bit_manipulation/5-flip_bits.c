#include "main.h"
#include <stdlib.h>
/**
 * flip_bits - number of bit you need to flip to change number
 * @n: first number
 * @m: second number
 * Return: number of bit fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int t;
	int differ = 0, i = i;

	t = n ^ m;
	while (i < 32)
	{
		if (t & 1)
			differ++;
		t = t >> 1;
		i++;
	}

	return (differ);
}
