#include "search_algos.h"

/**
 * linear_skip - search in array using jump search method
 * @list: pointer to headof list
 * @value: value search for
 * Return: pointer to node or NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	size_t i;
	skiplist_t *ptr = list, *prev = list;

	if (list == NULL)
		return (NULL);

	while (ptr->express)
	{
		if (ptr->index > 0)
		{
			printf("Value checked array[%ld] = [%d]\n", ptr->index, ptr->n);
			if (ptr->n > value)
				break;
			prev = ptr;
		}
		ptr = ptr->express;
	}

	i = ptr->index;
	printf("Value found between indexes [%ld] and [%ld]\n", prev->index, i);

	while (prev && prev->index <= i)
	{
		printf("Value checked array[%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
