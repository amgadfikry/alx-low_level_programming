#include "main.h"
/**
 * main - entry point function
 * Return: 0
 */
int main(void)
{
	char printed[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(printed[i]);
	_putchar('\n');

	return (0);
}
