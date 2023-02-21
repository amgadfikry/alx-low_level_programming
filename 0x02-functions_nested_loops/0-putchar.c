#include "main.h"
/**
 * main - entry point function
 * Return: 0
 */
int main(void)
{	
	char printed[9] = "_putchar";
	int i ;

	for (i = 0; i < 9; i++)
		_putchar(printed[i]);
	_putchar('\n');

	return (0);
}
