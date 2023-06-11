#include "hash_tables.h"

/**
 * shash_table_create - function that create empty hash table
 * and sorted linked list
 * @size: size of hash table
 * Return: pointer to hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table = NULL;
	unsigned long int i;

	if (size < 1)
		return (NULL);

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}

/**
 * add_to_array - add new item to array in hash table structure
 * @ht: pointer to hash table
 * @item: pointer to new item
 * @index: index of item in table
 * Return: nothing
 */

void add_to_array(shash_table_t *ht, shash_node_t *item, int index)
{
	shash_node_t *ptr = ht->array[index];

	if (ptr == NULL)
	{
		ptr = item;
		return;
	}
	while (ptr)
	{
		if (strcmp(ptr->key, item->key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(item->value);
			free(item->key);
			free(item->value);
			free(item);
			return;
		}
		ptr = ptr->next;
	}
	item->next = ptr;
	ptr = item;
}

/**
 * add_to_list - function add element sorted in sorted linked list
 * @ht: pointer to hash table
 * @new_item: pointer to new item
 * Return: nothing
 */

void add_to_list(shash_table_t *ht, shash_node_t *new_item)
{
	shash_node_t *ptr = ht->shead, *temp = NULL;

	if (ptr == NULL)
	{
		ht->shead = new_item;
		ht->stail = new_item;
	}
	else
	{
		while (ptr)
		{
			if (strcmp(ptr->key, new_item->key) > 0)
			{
				new_item->sprev = ptr->sprev;
				new_item->snext = ptr;
				if (ptr->sprev == NULL)
				{
					ptr->sprev = new_item;
					ht->shead = new_item;
				}
				else
				{
					ptr->sprev->snext = new_item;
					ptr->sprev = new_item;
				}
				return;
			}
			if (ptr->next == NULL)
				temp = ptr;
			ptr = ptr->snext;
		}
		new_item->sprev = temp;
		new_item->snext = NULL;
		temp->snext = new_item;
		ht->stail = new_item;
	}
}

/**
 * shash_table_set - function that insert new element to hash table
 * and to sorted linked list
 * @ht: pointer to hash table
 * @key: pointer to key string
 * @value: pointer to value string
 * Return: 0 if failed or 1 if success
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_item = NULL;
	unsigned long int index;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);

	index = hash_djb2((unsigned char *)key) % ht->size;

	new_item = malloc(sizeof(shash_node_t));
	if (new_item == NULL)
		return (0);

	new_item->key = strdup(key);
	new_item->value = strdup(value);
	if (!new_item->key || !new_item->value)
	{
		free(new_item);
		return (0);
	}

	new_item->next = NULL;
	new_item->snext = NULL;
	new_item->sprev = NULL;

	add_to_array(ht, new_item, (int)index);

	if (new_item)
		add_to_list(ht, new_item);

	return (1);
}

/**
 * list_search - search for item in linked list
 * @head: pointer to list head
 * @key: key we search by it
 * Return: value inside item to item or NULL
 */

char *list_search(shash_node_t *head, const char *key)
{
	shash_node_t *ptr = head;

	while (ptr)
	{
		if (strcmp(key, ptr->key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}

	return (NULL);
}

/**
 * shash_table_get - retrive value of specific key
 * @ht: pointer to hash table
 * @key: pointer to key string
 * Return: string of value
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *item;

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

/**
 * shash_table_print - print sorted list of hash table
 * @ht: pointer to hash table
 * Return: nothing
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *ptr = ht->shead;

	if (!ptr)
		return;

	printf("{");
	while (ptr)
	{
		printf("'%s': '%s'", ptr->key, ptr->value);
		if (ptr->snext)
			printf(", ");
		ptr = ptr->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print sorted list of hash table
 * in reverse order
 * @ht: pointer to hash table
 * Return: nothing
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *ptr = ht->stail;

	if (!ptr)
		return;

	printf("{");
	while (ptr)
	{
		printf("'%s': '%s'", ptr->key, ptr->value);
		if (ptr->sprev)
			printf(", ");
		ptr = ptr->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete hash table
 * @ht: pointer to hash table
 * Return: nothing
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *ptr = NULL;

	if (ht == NULL)
		return;
	ptr = ht->shead;
	while (ptr)
	{
		ht->shead = ptr->next;
		free(ptr->key);
		free(ptr->value);
		free(ptr);
		ptr = ht->shead;
	}
	ht->shead = NULL;
	ht->stail = NULL;
	free(ht->array);
	ht->array = NULL;
	free(ht);
	ht = NULL;
}
