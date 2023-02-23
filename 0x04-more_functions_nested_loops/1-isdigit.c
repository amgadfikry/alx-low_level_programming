#include "main.h"
/**
 * _isdigit - know if input digit or not
 * @c: input digit
 * Return: 1 if digit and 0 if not
 */
int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
