#include "main.h"
/**
 * times_table - write table
 * Return: nothing
 */
void times_table(void)
{
	int i;
	int j = 10;
	int num;

	for (i = 0; i < 10; i++)
	{
		num = 0;
		_putchar(num);
		_putchar(',');
		while (j >= 0)
		{
			num += i;
			_putchar(num);
			_putchar(',');
		}
		_putchar('\n');
	}
}
