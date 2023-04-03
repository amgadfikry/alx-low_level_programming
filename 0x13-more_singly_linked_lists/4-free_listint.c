#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function free memory
 * @head: pointer to start of list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
		free_listint(head);
	}
}
