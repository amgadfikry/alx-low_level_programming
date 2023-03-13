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
	int **result, i = 0, x = 0;

	if (width == 0 || height == 0)
		return (NULL);
	result = malloc(sizeof(int *) * height);
	
	while (i < height)
	{
		result[i] = malloc(sizeof(int) * width);
		i++;
	}
	i = 0;
	while (i < height)
	{
		if (result == NULL)
		{
			free(result);
			return (NULL);
		}
		if (result[i] == NULL)
		{
			free(result[i]);
			free(result);
			return (NULL);
		}
		while (x < width)
		{
			result[i][x] = 0;
			x++;
		}
		i++;
	}

	return (result);
}