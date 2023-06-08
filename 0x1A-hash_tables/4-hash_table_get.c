#include "hash_tables.h"

/**
 * list_search - search for item in linked list
 * @head: pointer to list head
 * @key: key we search by it
 * Return: value inside item to item or NULL
 */

char *list_search(hash_node_t *head, const char *key)
{
	hash_node_t *ptr = head;

	while (ptr)
	{
		if (strcmp(key, ptr->key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}

	return (NULL);
}

/**
 * hash_table_get - retrive value assiciated with key
 * @ht: pointer to hash table
 * @key: key to get it's value
 * Return: NULL if failed or value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *item;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = hash_djb2((unsigned char *)key) % ht->size;
	item = ht->array[index];

	if (item)
	{
		if (strcmp(key, (const char *)item->key) == 0)
			return (item->value);
		else
			return (list_search(item, key));
	}

	return (NULL);
}
