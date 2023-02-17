#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry main function
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}

