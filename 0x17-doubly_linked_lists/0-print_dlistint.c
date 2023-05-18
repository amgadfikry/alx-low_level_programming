#include "lists.h"
/**
 * print_dlistint - finction that print all elements in doble lists
 * @h: double list pointer
 * Return: number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		size++;
	}

	return (size);
}
