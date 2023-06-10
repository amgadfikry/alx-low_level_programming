#include "main.h"
/**
 * reverse_array - reverse array args
 * @a: array
 * @n: int input
 * Return: nothing
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
}
