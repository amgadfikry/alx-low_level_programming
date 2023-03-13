#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - return pointer to grid
 * @width: input width
 * @height: input height
 * Return: NULL or 2D array
 */
int **alloc_grid(int width, int height)
{
	int *warr, i = 0, x = 0;
	int *harr;

	if (width == 0 || height == 0)
		return (NULL);
	warr = malloc(sizeof(int) * height);
	while (i < height)
	{
		harr = malloc(sizeof(int) * width);
		while (x < width)
		{
			harr[x] = 0;
			x++;
		}
		warr[i] = harr;
	}

	return (warr);
}
