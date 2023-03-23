#include "variadic_function.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * p_char - print char
 * @p: va_list
 * Return: nothing
 */
void p_char(va_list p)
{
	printf("%c", va_arg(p, int));
}
/**
 * p_int - print int
 * @p: va_list
 * Return: nothing
 */
void p_int(va_list p)
{
	printf("%d", va_arg(p, int));
}
/**
 * p_float - print float
 * @p: va_list
 * Return: nothing
 */
void p_float(va_list p)
{
	printf("%f", va_arg(p, double));
}
/**
 * p_str - print str
 * @p: va_list
 * Return: nothing
 */
void p_str(va_list p)
{
	char *str = va_arg(p, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - function print all parameters different data type
 * @format: input list type of format
 * @...: rest parameters
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	fmt form[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_str},
		{NULL, NULL}
	};
	unsigned int i = 0, j;
	char *s = "";
	va_list p;

	va_start(p, format);
	while (format[i] && format)
	{
		j = 0;
		while (form[j].c != NULL)
		{
			if (format[i] == *(form[j].c))
			{
				printf("%s", s);
				form[j].f(p);
				s = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(p);
	printf("\n");
}
