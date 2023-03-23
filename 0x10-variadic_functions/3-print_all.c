#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function print all parameters different data type
 * @format: input list type of format
 * @...: rest parameters
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *s = ", ", *c;
	va_list p;

	va_start(p, format);
	while (format[i] && format)
		i++;
	while (format[j] && format)
	{
		if (j == (i - 1))
			s = "";
		switch (format[j])
		{
			case 'c':
				printf("%c%s", va_arg(p, int), s);
				break;
			case 'i':
				printf("%d%s", va_arg(p, int), s);
				break;
			case 'f':
				printf("%f%s", va_arg(p, double), s);
				break;
			case 's':
				c = va_arg(p, char *);
				if (c == NULL)
					c = "(nil)";
				printf("%s%s", c, s);
				break;
		}
		j++;
	}
	printf("\n");
	va_end(p);
}
