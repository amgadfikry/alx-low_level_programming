#include "lists.h"
#include <stdlib.h>
/**
 * add_node_end - add new node
 * @head: pointer to pointer of list
 * @str: pointer to string
 * Return: adress of element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *p;
	char *s;
	int i = 0, j = 0;

	p = *head;
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	while (str[i])
		i++;
	s = malloc(sizeof(char) * i);
	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	new->str = s;
	new->len = i;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = NULL;
		while (p->next != NULL)
			p = p->next;
		p->next = new;
	}

	return (new);
}
