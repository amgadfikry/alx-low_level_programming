#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * recursive - reverse list
 * @nex: next pointer
 * @current: current node
 * Return: last current
 */
listint_t *recursive(listint_t *nex, listint_t *current)
{
	if (nex->next != NULL)
		recursive(nex->next, current->next);
	nex->next = current;

	return (current);
}
/**
 * reverse_listint - reverse list
 * @head: input pointer list
 * Return: pointer to reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *start, *ptr;

	if (*head == NULL)
	{
		free(*head);
		return (NULL);
	}
	ptr = *head;
	start = ptr->next;
	while (ptr->next != NULL)
		ptr = ptr->next;
	recursive(start, *head)->next = NULL;
	*head = ptr;

	return (*head);
}
