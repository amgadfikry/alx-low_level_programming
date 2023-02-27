#include "main.h"
/**
 * swap_int - swap int values
 * @a: input int
 * @b: input int
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
