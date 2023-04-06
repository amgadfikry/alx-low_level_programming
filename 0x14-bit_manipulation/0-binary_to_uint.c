#include "main.h"
#include <stdlib.h>
/**
 * power - power 2 by number
 * @n: number of pow
 * Return: result
 */
unsigned int power(unsigned int n)
{
	unsigned int sum = 1, i;

	for (i = n; i > 0; i--)
		sum *= 2;

	return (sum);
}
/**
 * binary_to_uint - function that convert binary number to int
 * @b: pointer to string of 0 and 1
 * Return: conerted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, pown = 0;
	int i, len = 0;

	if (b == NULL)
		return (result);
	while (b[len])
	{
		if (b[len] != 48 && b[len] != 49)
			return (result);
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == 49)
			result += power(pown);
		pown++;
	}

	return (result);
}
