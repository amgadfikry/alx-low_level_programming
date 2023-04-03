#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - delete node at specific index
 * @head: pointer to list
 * @index: index input
 * Return: -1 or 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *node;
	unsigned int i = 0;

	ptr = *head;
	if (*head == NULL)
	{
		free(*head);
		return (-1);
	}
	while (ptr != NULL)
	{
		if (index == 0)
		{
			node = ptr;
			*head = ptr->next;
			free(node);
			return (1);
		}
		else if ((index - 1) == i)
		{
			node = ptr->next;
			ptr->next = ptr->next->next;
			free(node);
			return (1);
		}
		i++;
		ptr = ptr->next;
	}

	return (-1);
}
