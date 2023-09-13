#include "search_algos.h"

/**
 * print_array - print the whole array
 * @array: pointer to array
 * @start: start index
 * @end: end index
 */

void print_array(int *array, int start, int end)
{
	int i = start;

	for (; i <= end; i++)
	{
		if (i == start)
			printf("Searching in array: ");
		if (i == end)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
}

/**
 * b_search - search for specific value in array
 * @array: pointer to array
 * @start: start of array
 * @end: end of array
 * @value: value search for
 * Return: index of value or -1
 */
int b_search(int *array, int start, int end, int value)
{
	int mid;

	print_array(array, start, end);
	if (start > end)
		return (-1);

	mid = start + (end - start) / 2;
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (b_search(array, start, mid - 1, value));
	else
		return (b_search(array, mid + 1, end, value));
}

/**
 * exponential_search - search for element by exponential_search algorithm
 * @array: pointer to array search in it
 * @size: length to array
 * @value: value searcheb for in array
 * Return: index of value or -1 if null array or not found value
 */

int exponential_search(int *array, size_t size, int value)
{
	int i = 1, x;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < (int)size && array[i] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i *= 2;
	}

	if (i > (int)size - 1)
		x = (int)size - 1;
	else
		x = i;

	printf("Value found between indexes [%d] and [%d]\n", i / 2, x);
	return (b_search(array, i / 2, x, value));
}
