#include "main.h"
/**
 * factorial - give factorial of number
 * @n: input number
 * Return: number
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
