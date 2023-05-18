#include "lists.h"
/**
 * dlistint_len - function that return number of nodes
 * @h: pointer double list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		size++;
		ptr = ptr->next;
	}

	return (size);
}
