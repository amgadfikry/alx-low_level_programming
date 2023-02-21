#include "main.h"
/**
 * jack_bauer - every min in day
 * Return: nothing
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			if (a < 10)
			{
				if (b < 10)
					_putchar('0' + a + ':' + '0' + b + '\n');
				else
					_putchar('0' + a + ':' + b + '\n');
			}
			else
			{
				if (b < 10)
					_putchar(a + ':' + '0' + b + '\n');
				else
					_putchar(a + ':' + b + '\n');
			}
		}
	}
}
