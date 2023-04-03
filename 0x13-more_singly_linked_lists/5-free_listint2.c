#include "lists.h"
/**
 * free_listint2 - free list and make head = null
 * @head: pointer to list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *pt;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		pt = *head;
		*head = (*head)->next;
		free(pt);
	}
}
