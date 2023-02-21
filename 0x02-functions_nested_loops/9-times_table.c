#include "main.h"
/**
 * times_table - write table
 * Return: nothing
 */
void times_table(void)
{
	int i, j, num;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
	}	{
			num = i * j;
			_putchar(num);
			if (j != 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
