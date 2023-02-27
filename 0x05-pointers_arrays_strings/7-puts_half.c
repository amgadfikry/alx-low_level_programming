#include "main.h"
/**
 * puts_half - print second half of string
 * @str: input char
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = 0;
	int num = 0;
	int n, j;

	while (str[i] != '\0')
	{
		num++;
		i++;
	}
	if (num % 2 == 0)
		n = num / 2;
	else
		n = (num / 2) + 1;
	for (j = n; j < num; j++)
		_putchar(str[j]);
	_putchar('\n');
}
