#include "main.h"
/**
 * print_line - draw straight line
 * @n: num input
 * Return: nothing
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}	
