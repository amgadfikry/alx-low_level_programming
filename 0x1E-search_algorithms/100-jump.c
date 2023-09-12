#include "search_algos.h"

/**
 * jump_search - search in array using jump search method
 * @array: pointer to array
 * @size: size of array
 * @value: value search for
 * Return: index
 */

int jump_search(int *array, size_t size, int value)
{
	int len = (int)size, i = 0, step, j;

	if (array == NULL)
		return (-1);

	step = sqrt(len - 1);
	while (i <= len - 1)
	{
		if (value < array[i] || value == array[i])
			break;
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i += step;
	}

	j = i - step;
	printf("Value found between indexes [%d] and [%d]\n", j, i);

	for (; j <= i; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (j >= len - 1)
			break;
		if (array[j] == value)
			return (j);
	}

	return (-1);
}
