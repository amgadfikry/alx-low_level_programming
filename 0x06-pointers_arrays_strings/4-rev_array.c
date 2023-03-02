#include "main.h"
/**
 * reverse_array - reverse array
 * @a: array
 * @n: int input
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int i;
	int x;

	for (i = 0; i < n; i++)
	{
		x = a[i];
		a[i] = a[n - 1];
		a[n - 1] = x;
		n--;
	}

	return (a);
}				
