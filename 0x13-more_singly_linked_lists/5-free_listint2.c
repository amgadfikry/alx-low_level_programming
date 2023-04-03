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

	if (*head == NULL)
		return;
	ptr = *head;
	while (ptr != NULL)
	{
		if (ptr->next == NULL)
		{
			free(ptr);
			*head = NULL;
			return;
		}
		else
		{
		pt = ptr->next;
		free(ptr);
		ptr = pt;
		}
	}
	*head = NULL;
}
