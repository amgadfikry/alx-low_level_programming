#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n: num input
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i;
	int j = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			while(j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
