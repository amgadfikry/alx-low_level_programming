#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to startt of lists
 * Return: numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}

	return (len);
}
