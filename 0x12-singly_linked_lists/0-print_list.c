#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - print elements
 * @h: pointer to structre
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *p;
	size_t count = 0;

	p = h;
	while (p != NULL)
	{
		if (p->str == NULL)
		{
			printf("[0] ");
			printf("(nil)\n");
		}
		else
		{
			printf("[%d] ", p->len);
			printf("%s\n", p->str);
		}
		count++;
		p = p->next;
	}

	return (count);
}
