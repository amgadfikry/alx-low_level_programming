#include "hash_tables.h"

/**
 * hash_table_delete - delete all hash table
 * @ht: pointer to hash table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr = NULL;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr)
		{
			ht->array[i] = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
			ptr = ht->array[i];
		}
		ht->array[i] = NULL;
	}
	free(ht->array);
	free(ht);
}
