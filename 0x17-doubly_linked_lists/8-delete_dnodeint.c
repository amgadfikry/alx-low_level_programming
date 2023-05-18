#include "lists.h"
/**
 * delete_dnodeint_at_index - function that delete node at given position
 * @head: pointer to double link list
 * @index: index where delete node
 * Return: 1 if success or -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int num = 0;

	while (ptr != NULL)
	{
		if (index == 0)
		{
			if (ptr->next == NULL)
			{
				free(ptr);
				*head = NULL;
				return (1);
			}
			ptr = ptr->next;
			free(ptr->prev);
			ptr->prev = NULL;
			*head = ptr;
			return (1);
		}
		if (num == index)
		{
			if (ptr->next == NULL)
			{
				ptr->prev->next = NULL;
				free(ptr);
				return (1);
			}
			ptr->prev->next = ptr->next;
			ptr->next->prev = ptr->prev;
			free(ptr);
			return (1);
		}
		num++;
		ptr = ptr->next;
	}
	return (-1);
}
