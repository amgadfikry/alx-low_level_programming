#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - get len of length
 * @h: pointer to structre
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *p;
	size_t count = 0;

	p = h;
	while (p != NULL)
	{
		count++;
		p = p->next;
	}

	return (count);
}
