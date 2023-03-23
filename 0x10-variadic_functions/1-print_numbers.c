#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - function print numbers
 * @separator: input char
 * @n: input number
 * @...: rest parameters
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list p;

	va_start(p, n);
	while (i < n)
	{
		printf("%d", va_arg(p, int));
		if (separator == NULL)
			printf(" ");
		else
		{
		if (i != n - 1)
			printf("%s ", separator);
		}
	}
	va_end(p);
	printf("\n");
}
