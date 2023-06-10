#include "main.h"
/**
 * print_diagonal - print diagonal line by character '\'
 * @n: num input
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			int j = 0;

			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
