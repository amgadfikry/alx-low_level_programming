#include "main.h"
#include <stdlib.h>
/**
 * print_binary - print binary repesentation of number
 * @n: input number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
