#include "hash_tables.h"

/**
 * key_index - get index from key value that will
 * store it's value in table
 * @key: string which will be the key
 * @size: size of hash table
 * Return: index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
