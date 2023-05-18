#include "lists.h"
/**
 * insert_dnodeint_at_index - function that insert node at given position
 * @h: pointer to double link list
 * @idx: index where insert node
 * @n: int data
 * Return: node pointer or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h, *node;
	unsigned int num = 0;
	const int i = n * 1;

	if (idx == 0)
		return (add_dnodeint(h, i));
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	while (ptr != NULL)
	{
		if (num == idx)
		{
			node->n = n;
			node->next = ptr;
			node->prev = ptr->prev;
			ptr->prev->next = node;
			ptr->prev = node;
			return (node);
		}
		num++;
		ptr = ptr->next;
	}
	return (NULL);
}
