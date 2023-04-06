#include "main.h"
#include <stdlib.h>

/**
 * check - check if number equal to binary base 2
 * @n: number check
 * @i: pow to raise 2
 * Return: 1 or 0
 */
int check(unsigned long int n, int i)
{
	int pown = 1, num = n;

	while (i > 0)
	{
		pown *= 2;
		i--;
	}
	if (num - pown >= 0)
		return (1);

	return (0);
}
/**
 * get_max - get max number of this pow
 * @i: pow raise 2
 * Return: max number
 */
unsigned long int get_max(int i)
{
	unsigned long int pown = 1;

	while (i > 0)
	{
		pown *= 2;
		i--;
	}

	return (pown);
}
/**
 * converter - convert number to array of binary
 * @n: number
 * @p: array of binary code
 * Return: pointer to array
 */
int *converter(unsigned long int n, int p[])
{
	int i = 31;

	while (i >= 0)
	{
		if (check(n, i) == 0)
			p[i] = 0;
		else if (check(n, i) == 1)
		{
			p[i] = 1;
			n -= get_max(i);
		}
		i--;
	}

	return (p);
}
/**
 * flip_bits - number of bit you need to flip to change number
 * @n: first number
 * @m: second number
 * Return: number of bit fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p1[32], p2[32], *first, *second, i = 0, differ = 0;

	first = converter(n, p1);
	second = converter(m, p2);

	while (i < 32)
	{
		if (first[i] != second[i])
			differ++;
		i++;
	}

	return (differ);
}
