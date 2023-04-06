#include "main.h"
#include <stdlib.h>
/**
 * get_pow - get largest pow of number
 * @n: input decimal number
 * Return: pow max
 */
int get_pow(unsigned long int n)
{
	unsigned long int pown = 1;
	int i = 0;

	while (pown <= n)
	{
		pown *= 2;
		i++;
	}

	return (i - 1);
}
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
 * print_binary - print binary repesentation of number
 * @n: input number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int po;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	po = get_pow(n);

	while (po >= 0)
	{
		if (check(n, po) == 0)
			_putchar('0');
		else if (check(n, po) == 1)
		{
			_putchar('1');
			n -= get_max(po);
		}
		po--;
	}
}
