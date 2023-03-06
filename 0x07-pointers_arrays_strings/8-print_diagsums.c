#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of diagonal matrix
 * @a: arry input
 * @size: input int
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int x = 0, y = size - 1;

	while (x < size)
	{
		sum1 += a[x][x];
		x++;
	}
	x = 0;
	while (x < size)
	{
		sum2 += a[x][y];
		x++;
		y--;
	}
	printf("%d, %d\n", sum1, sum2);
}
