#include "main.h"
/**
 * _sqrt_recursion - give square root
 * @n: input number
 * Return: number
 */
int sqr(int start, int result)
{
	if (start * start == result)
		return (start)
	else if (start < 0)
		return (-1);
	else
		sqr(start - 1, result);
}
int _sqrt_recursion(int n)
{
	return (sqr(n, n));
}
