#include "main.h"
/**
 * _isupper - check char is upper case or not
 * @c: char input
 * Return: 0 if not uppercase and 1 if uppercase
 */
int _isupper(int c)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			return (1);
		else
			return (0)
	}
}
