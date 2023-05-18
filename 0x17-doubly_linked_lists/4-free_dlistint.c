#include "lists.h"
/**
 * free_dlistint - free all double link list
 * @head: pointer to list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
