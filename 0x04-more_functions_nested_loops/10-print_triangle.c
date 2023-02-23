#include "main.h"
/**
 * print_triangle - print triangle shape
 * @size: input size
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j;
	int n = size;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			j = 0;
			while (j < size)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');
				j++;
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
