#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - function that returns the number of elements in list
 * @h: pointer to startt of lists
 * Return: numbers of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
