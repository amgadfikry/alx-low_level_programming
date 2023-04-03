#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_listint - sum all data of list
 * @head: pointer to head
 * Return: sum result
 */
int sum_listint(listint_t *head)
{
	listint_t = *ptr;
	int sum = 0;

	if (head == NULL)
	{
		free(head);
		return (sum);
	}
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
