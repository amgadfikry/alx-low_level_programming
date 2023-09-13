#include "search_algos.h"

/**
 * jump_list - search in array using jump search method
 * @list: pointer to headof list
 * @size: size of array
 * @value: value search for
 * Return: pointer to node or NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, step;
	listint_t *ptr = list, *prev = list;

	if (list == NULL)
		return (NULL);

	step = sqrt(size);
	while (ptr)
	{
		if ((ptr->index % step == 0 && ptr->index > 0) || ptr->index == size - 1)
		{
			printf("Value checked array[%ld] = [%d]\n", ptr->index, ptr->n);
			if (ptr->n > value || ptr->index == size - 1)
				break;
			prev = ptr;
		}
		ptr = ptr->next;
	}

	i = ptr->index;
	printf("Value found between indexes [%ld] and [%ld]\n", prev->index, i);

	while (prev && prev->index < i)
	{
		printf("Value checked array[%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
