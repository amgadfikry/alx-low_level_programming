#include "lists.h"
#include <string.h>
/**
 * add_node - add new node
 * @head: pointer to pointer of list
 * @str: pointer to string
 * Return: adress of element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdub(str);
	while (*str)
	{
		i++;
		str++;
	}
	new->next = *head;
	new->len = i;
	*head = new;

	return (*head);
}
