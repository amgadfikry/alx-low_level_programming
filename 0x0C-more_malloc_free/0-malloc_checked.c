#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate a memory using malloc
 * @b: input int
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
