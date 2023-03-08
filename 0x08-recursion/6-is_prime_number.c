#include "main.h"
int check(int i, int n);
/**
 * is_prime_number - prime or not
 * @n: input number
 * Return: number 0 or 1
 */
int is_prime_number(int n)
{
	if (n == 0 || n == 1)
		return (0);
}
/**
 * check - check prime or not
 * @i: input number
 * @n: input number
 * Return: number
 */
int check(int i, int n)
{
	if (n == 0 || n == 1)
		return (0);
	if (i / 2 < n)
	{
		if (i % i == 0)
			return (0);
		else
			return (check(i + 1, n));
	}
	else
		return (1);
}
