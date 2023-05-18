#include "lists.h"
/**
 * get_dnodeint_at_index - function node at specific index
 * @head: pointer to double link list
 * @index: index to get it
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int num = 0;

	while (ptr != NULL)
	{
		if (num == index)
			return (ptr);
		ptr = ptr->next;
		num++;
	}

	return (NULL);
}
