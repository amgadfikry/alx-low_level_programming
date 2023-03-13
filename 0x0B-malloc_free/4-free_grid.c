#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - free 2 dimention array
 * @grid: pointer 2D array
 * @height: input height
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i = height - 1;

	while (i >= 0)
	{
		free(grid[i]);
		i--;
	}
	free(grid);
}
