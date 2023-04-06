#include "main.h"
#include <stdlib.h>
/**
 * get_endianness - check state of it
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);

	return (0);
}
