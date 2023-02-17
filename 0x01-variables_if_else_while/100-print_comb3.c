#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry main function
 * Return: 0 (success)
 */
int main(void)
{
	int c;
	int d;

	for (c = '0'; c <= '9'; c++)
	{
		for (d = '0'; d <= '9'; d++)
		{
			if (c > d)
			{
				putchar(c);
				putchar(d);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

