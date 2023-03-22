#include <stdlib.h>
/**
 * int_index - function that search for int
 * @array: input array
 * @size: input size of array
 * @cmp: input function that compare values
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) == 1)
			return (i);
		i++;
	}

	return (-1);
}
