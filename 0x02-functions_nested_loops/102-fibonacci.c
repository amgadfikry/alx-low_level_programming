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

	printf("%d, ", a);
	printf("%d, ", b);
	for (i = 1; i <= 50; i++)
	{
		if (i % 2 == 1)
		{
			a = a + b;
			printf("%d, ", a);
		}
		else if (i % 2 == 0)
		{
			b = a + b;
			if (i != 50)
				printf("%d, ", b);
			else
				printf("%d, ", b);
		}
	}
	printf("\n");

	return (0);
}
