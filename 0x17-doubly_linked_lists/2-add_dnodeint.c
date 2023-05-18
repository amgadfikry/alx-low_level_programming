#include "lists.h"
/**
 * add_dnodeint - function that add node at beginning of
 * double link list
 * @head: pointer to list
 * @n: int data
 * Return: adress of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node, *ptr = *head;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->prev = NULL;
	node->n = n;
	node->next = NULL;
	if (ptr == NULL)
		*head = node;
	else
	{
		ptr->prev = node;
		node->next = ptr;
		*head = node;
	}

	return (*head);
}
