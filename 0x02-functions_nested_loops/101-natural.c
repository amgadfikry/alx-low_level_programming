#include <stdio.h>
/**
 * main - entry function
 * Return: 0
 */
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 && i % 5)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
