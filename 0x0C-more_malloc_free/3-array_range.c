#include "main.h"
#include <stdlib.h>
/**
 * array_range - create array of int
 * @min: input int
 * @max: input max
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int i, size, x;
	int *p;

	if (min > max)
		return (NULL);

	size = max - min;

	p = malloc(sizeof int * (size + 1));

	if (p == NULL)
		return (NULL);

	for (i = min, x = 0; i <= max; i++, x++)
		p[x] = i;

	return (p);
}
