#include "main.h"
int sqr(int start, int result);

/**
 * _sqrt_recursion - give square root by recursion
 * @n: input number
 * Return: number
 */
int _sqrt_recursion(int n)
{
	return (sqr(1, n));
}

/**
 * sqr - check root
 * @start: input number
 * @result: input number
 * Return: result int
 */
int sqr(int start, int result)
{
	if (start * start == result)
		return (start);
	else if (start * start > result)
		return (-1);
	else
		return (sqr(start + 1, result));
}
