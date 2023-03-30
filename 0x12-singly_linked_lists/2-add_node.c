#include "lists.h"
#include <stdlib.h>
/**
 * add_node - add new node
 * @head: pointer to pointer of list
 * @str: pointer to string
 * Return: adress of element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *s;
	int i = 0, j = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	s = malloc(sizeof(char) * i);
	while (str[j] != '\0')
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	new->str = s;
	new->next = *head;
	new->len = i;
	*head = new;

	return (*head);
}
