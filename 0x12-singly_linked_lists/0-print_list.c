#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - print elements
 * h: pointer to structre
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *p;
	int count = 0;

	p = h;
	while (!p)
	{
		printf("[%d] ", p->len);
		if (p->str == NULL)
			printf("(nil)");
		else
			printf("%s\n", p->str);
		count++;
	}

	return (count);
}
