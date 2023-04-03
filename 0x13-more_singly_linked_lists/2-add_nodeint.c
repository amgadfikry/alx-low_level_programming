#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add node to begining of list
 * @head: list pointer start
 * @n: data int of node
 * Return: pointer to node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	*head = node;

	return (*head);
}
