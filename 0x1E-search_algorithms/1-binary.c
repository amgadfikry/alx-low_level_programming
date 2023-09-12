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

	printf("Searching in array: ");
	for (; i <= end; i++)
	{
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
 * binary_search - search for element in array by binary search algorithm
 * @array: pointer to array search in it
 * @size: length to array
 * @value: value searcheb for in array
 * Return: index of value or -1 if null array or not found value
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (b_search(array, 0, (int)size - 1, value));
}
