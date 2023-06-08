#include "hash_tables.h"

/**
 * hash_table_set - add element to table and if there element
 * in index create node in it's linked list
 * @ht: hash table pointer
 * @key: key of table item
 * @value: value of table item
 * Return: 0 if failed or 1 if success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item = NULL, *ptr = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = hash_djb2((unsigned char *)key) % ht->size;
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	item->key = strdup(key);
	item->value = strdup(value);
	if (item->key == NULL || item->value == NULL)
		return (0);
	item->next = NULL;

	if (ht->array[index] == NULL)
		ht->array[index] = item;
	else
	{
		ptr = ht->array[index];
		while (ptr)
		{
			if (strcmp(ptr->key, key) == 0)
			{
				free(item->key);
				free(item->value);
				free(item);
				return (0);
			}
			ptr = ptr->next;
		}
		item->next = ht->array[index];
		ht->array[index] = item;
	}

	return (1);
}
