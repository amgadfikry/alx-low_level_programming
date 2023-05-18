#include "lists.h"
/**
 * sum_dlistint - function that return sum of all int data
 * @head: pointer to double list
 * Return: sum of list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
