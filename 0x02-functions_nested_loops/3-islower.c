#include "main.h"
/**
 * _islower - to determine char is lowercase or not
 * Return: 1 if lower and 0 if upper
 */
int _islower(int c)
{
	int result;
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n == c)
			result = 1;
		else
			result = 0;
	}

	return (result);
}
