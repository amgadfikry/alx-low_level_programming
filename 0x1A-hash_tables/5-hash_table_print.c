#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table in order
 * @ht: hash table pointer
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	int i, comma = 0;
	hash_node_t *ptr = NULL;

	if (ht == NULL)
	{
	}
	printf("{");
	for (i = 0; i < (int)ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		if (comma == 1)
			printf(", ");
		ptr = ht->array[i];
		comma = 1;
		while (ptr)
		{
			printf("'%s': '%s'", ptr->key, ptr->value);
			ptr = ptr->next;
			if (ptr)
				printf(", ");
		}
	}
	printf("}\n");
}
