#include "main.h"
/**
 * print_rev - return length of string
 * @s: input string
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;
	int num = 0;
	int j;

	while (s[i] != '\0')
	{
		num++;
		i++;
	};
	for (j = num; j > 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
