#include "search_algos.h"

/**
 * linear_search - search in array by linear algorithm
 * @array: pointer to array search in it
 * @size: size of array
 * @value: value want to search for
 * Return: index of value or -1 if not found and empty array
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (-1);

	for (; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

	return (-1);
}
