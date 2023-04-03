#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_nodeint_at_index - function get nide at specific index
 * @head: pointer to list
 * @index: index of node
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i = 0;

	if (head == NULL)
	{
		free(head);
		return (NULL);
	}
	ptr = head;
	while (ptr != NULL)
	{
		if (index == i)
			return (ptr);
		i++;
		ptr = ptr->next;
	}

	return (NULL);
}
