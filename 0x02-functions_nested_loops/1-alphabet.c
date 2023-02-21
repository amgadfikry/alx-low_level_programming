#include <stdio.h>
#include "main.h"
/**
 * main - entry point function
 * print_alphabet - print lowercase alphabet
 * Return: 0
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char c;

	for(c = 'a' ; c <= 'z' ; c++)
		_putchar(c);
	_putchar('\n');
}
