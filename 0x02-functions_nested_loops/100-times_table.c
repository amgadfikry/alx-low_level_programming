#include "main.h"
/**
 * print_times_table - function print table of numbers
 * @n: input number
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j, num;

	if ( n < 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				num = i * j;
				if ((num / 10) == 0)
				{
					if (j != 0)
						_putchar(' ');
					_putchar(num + '0');
					if (j == n)
						continue;
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar((num / 10) + '0');
					_putchar((num % 10) + '0');
					if (j == n)
						continue;
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
