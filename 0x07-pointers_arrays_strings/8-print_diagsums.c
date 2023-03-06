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
	int x = 0, y = size * size;

	while (x < y)
	{
		sum1 += a[x];
		x += (size + 1);
	}
	x = 0;
	while (x < y - 1)
	{
		sum2 += a[x];
		x += (size -1);
	}
	printf("%d, %d\n", sum1, sum2);
}
