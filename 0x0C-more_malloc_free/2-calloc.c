#include "main.h"
#include <stdlib.h>
/**
 * calloc - allocate memory for array
 * @nmemb: input int
 * @size: input int
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	
	memset(p, 0, size * nmemb);

	return (p);
}
