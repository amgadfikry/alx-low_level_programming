#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert node at specific index
 * @head: pointer ton list
 * @idx: index of node to add
 * @n: int data of new node
 * Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *node;
	unsigned int i = 0;

	ptr = *head;
	node = malloc(sizeof(listint_t));
	if (node == NULL || *head == NULL)
	{
		free(*head);
		free(node);
		return (NULL);
	}
	node->n = n;
	while (ptr != NULL)
	{
		if (idx == 0)
		{
			node->next = *head;
			*head = node;
			free(node);
			return (*head);
		}
		else if ((idx - 1) == i)
		{
			node->next = ptr->next;
			ptr->next = node;
			return (node);
		}
		i++;
		ptr = ptr->next;
	}
	free(node);

	return  (NULL);
}
