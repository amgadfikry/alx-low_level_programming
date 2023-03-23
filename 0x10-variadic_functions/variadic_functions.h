#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#include <stdarg.h>
/** 
 * struct fmt - Struct fmt
 * @c: The identifier
 * @f: function pointer
 */
typedef struct fmt
{
	char *c;
	void (*f)(va_list);
} fmt;
#endif
