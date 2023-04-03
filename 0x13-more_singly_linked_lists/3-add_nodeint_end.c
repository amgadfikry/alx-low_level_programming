#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - add node to end of list
 * @head: pointer to list start
 * @n: int data
 * Return: adress of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *ptr;

	ptr = *head;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = node;
	}

	return (node);
}
