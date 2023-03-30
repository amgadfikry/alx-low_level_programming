#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free list memory
 * @head: list pointer
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *p;

	p = head;
	while (p->next != NULL)
	{
		free(p->next);
		p = p->next;
	}
	free(p);
	free(head);
}
