#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free list and make head = null
 * @head: pointer to list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *pt;
	ing i;

	if (*head == NULL || head == NULL)
		return;
	ptr = *head;
	fot (i = 0; ptr != NULL; i++)
	{
		pt = ptr->next;
		free(ptr);
		ptr = pt;
	}
	*head = NULL;
}
