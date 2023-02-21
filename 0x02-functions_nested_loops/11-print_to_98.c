#include "main.h"
/**
 * print_to_98 - print all numbers to 98
 * @n: number start from it
 * Return: nothing
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n < 98)
	{
		for (i = n; i <=98; i++)
		{
			_putchar(i);
			if (i != 98)
			{
				_putchar(",");
				_putchar(' ');
			}
		}
	}
	else
		_putchar(n);
	_putchar('\n');
}
