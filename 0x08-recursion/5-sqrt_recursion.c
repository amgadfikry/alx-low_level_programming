#include "main.h"
/**
 * sqr - function check root
 * @start: input number
 * @result: input number
 * Return: result
 */
int sqr(int start, int result);
/**
 * _sqrt_recursion - give square root
 * @n: input number
 * Return: number
 */
int _sqrt_recursion(int n)
{
	return (sqr(1, n));
}

int sqr(int start, int result)
{
	if (start * start == result)
		return (start);
	else if (start * start > result)
		return (-1);
	else
		return (sqr(start + 1, result));
}
