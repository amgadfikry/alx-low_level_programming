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

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->prev = NULL;
		node->next = *h;
		ptr->prev = node;
		*h = node;
		return (*h);
	}
	else
	{
		while (ptr != NULL)
		{
			if (num == idx)
			{
				node->next = ptr;
				node->prev = ptr->prev;
				ptr->prev->next = node;
				ptr->prev = node;
				return (node);
			}
			num++;
			if (num == idx && ptr->next == NULL)
			{
				node->next = NULL;
				node->prev = ptr;
				ptr->next = node;
				return (node);
			}
			ptr = ptr->next;
		}
	}
	return (NULL);
}
