#include "main.h"
/**
 * _pow_recursion - pow number by recursion
 * @x: input number
 * @y: input number
 * Return: number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
