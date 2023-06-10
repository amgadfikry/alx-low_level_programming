#include "main.h"
/**
 * print_line - draw straight line by character _
 * @n: num input
 *
 * Return: nothing
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
			_putchar('_');
	}
	_putchar('\n');
}
