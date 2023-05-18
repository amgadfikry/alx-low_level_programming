#include "lists.h"
/**
 * add_dnodeint_end - function that add node at end
 * of double link list
 * @head: pointer to list
 * @n: int data
 * Return: adress of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *ptr = *head;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->next = NULL;
	node->n = n;
	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		node->prev = ptr;
		ptr->next = node;
	}

	return (node);
}
