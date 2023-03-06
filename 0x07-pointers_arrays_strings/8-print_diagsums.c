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
	int x, y = size * size;

	for (x = 0; x < y; x += size + 1)
		sum1 += a[x];
	for (x = size - 1; x < y - 1; x += size - 1)
		sum2 += a[x];

	printf("%d, %d\n", sum1, sum2);
}
