#include <stdio.h>
/**
 * main - entery function
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int a = 1;
	unsigned long int b = 2;

	printf("%lu, ", a);
	printf("%lu, ", b);
	for (i = 1; i <= 96; i++)
	{
		if (i % 2 == 1)
		{
			a = a + b;
			printf("%010lu", a);
		}
		else if (i % 2 == 0)
		{
			b = a + b;
			printf("%010lu", b);
		}
		if (i != 96)
			printf(", ");
	}
	printf("\n");

	return (0);
}
