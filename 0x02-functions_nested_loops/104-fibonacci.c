#include <stdio.h>
/**
 * main - entery function
 * Return: 0
 */
int main(void)
{
	int i;
	long int a = 1;
	long int b = 2;

	printf("%ld, ", a);
	printf("%ld, ", b);
	for (i = 1; i <= 90; i++)
	{
		if (i % 2 == 1)
		{
			a = a + b;
			printf("%ld, ", a);
		}
		else if (i % 2 == 0)
		{
			b = a + b;
			if (i == 90)
				printf("%ld", b);
			else
				printf("%ld, ", b);
		}
	}
	printf("\n");

	return (0);
}
