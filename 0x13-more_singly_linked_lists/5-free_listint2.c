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

	ptr = *head;
	while (ptr != NULL)
	{
		pt = ptr;
		ptr = ptr->next;
		free(pt);
	}
	*head = NULL;
}
