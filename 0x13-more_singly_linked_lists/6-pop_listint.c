#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - delete head node and return node data
 * @head: pointer to head
 * Return: data of node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr;

	ptr = *head;
	if (ptr == NULL)
		return (0);
	n = ptr->n;
	*head = ptr->next;
	free(ptr);

	return (n);
}
