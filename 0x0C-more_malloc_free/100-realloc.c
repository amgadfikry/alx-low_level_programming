#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory block
 * @ptr: input pointer
 * @old_size: input int
 * @new_size: input int
 * Return: new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	int i;

	if (new_size == old_size)
		return (p);
	if (new_size == 0 && ptr != NULL)
		return (NULL);
	
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p ==NULL)
			return (NULL);
		return (p);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i <= old_size; i++)
	{
		p[i] = *ptr;
		ptr++;
	}

	return (p);
}
