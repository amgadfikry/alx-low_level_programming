#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free list and make head = null
 * @head: pointer to list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
		return;
	ptr = *head;
	while (*head != NULL)
	{
		ptr = *head;
		(*head) = (*head)->next;
		free(ptr);
	}
	*head = NULL;
}
