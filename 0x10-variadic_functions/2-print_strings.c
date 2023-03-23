#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - function print strings
 * @separator: input char
 * @n: input number
 * @...: rest parameters
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list p;
	const char *str;

	va_start(p, n);
	while (i < n)
	{
		str = va_arg(p, const char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL)
		{
			if (i != n - 1)
				printf("%s", separator);
		}
		i++;
	}
	va_end(p);
	printf("\n");
}
