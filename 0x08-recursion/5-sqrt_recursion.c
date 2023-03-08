#include "main.h"
/**
 * _sqrt_recursion - give square root
 * @n: input number
 * Return: number
 */
int sqr(int start, int result);

int __sqrt_recursion(int n)
{
	return (sqr(1, n));
}

int sqr(int start, int result)
{
	if (start * start == result)
		return (start);
	else if (start > result)
		return (-1);
	else
		return (sqr(start + 1, result));
}
