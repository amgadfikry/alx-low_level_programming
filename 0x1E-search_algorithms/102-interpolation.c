#include "search_algos.h"

/**
 * b_search - search for specific value in array
 * @array: pointer to array
 * @s: start of array
 * @e: end of array
 * @value: value search for
 * Return: index of value or -1
 */
int b_search(int *array, int s, int e, int value)
{
	int pos;

	if (s > e)
		return (-1);
	pos =  s + (((double)(e - s) / (array[e] - array[s])) * (value - array[s]));
	if (array[pos] == 0)
		printf("Value checked array[%d] is out of range\n", pos);
	else
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
	if (array[pos] == value)
		return (pos);
	else if (array[pos] > value)
		return (b_search(array, s, pos - 1, value));
	else
		return (b_search(array, pos + 1, e, value));
}

/**
 * interpolation_search - search for element in array
 * @array: pointer to array search in it
 * @size: length to array
 * @value: value searcheb for in array
 * Return: index of value or -1 if null array or not found value
 */

int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (b_search(array, 0, (int)size - 1, value));
}
