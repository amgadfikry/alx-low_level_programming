#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function return sum of all parameters
 * @n: input size
 * @...: rest parameters
 * Return: int of sum result
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = 0;
	va_list p;

	if (n == 0)
		return (0);
	va_start(p, n);
	while (i < n)
	{
		sum += va_arg(p, int);
		i++;
	}
	va_end(p);

	return (sum);
}
