#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - excute given function in each element of array
 * @array: input array
 * @size: size of array
 * @action: pointer to function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i <= size)
	{
		action(array[i]);
		i++;
	}
}
