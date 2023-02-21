#include <stdio.h>
/**
 * main - entery function
 * Return: 0
 */
int main(void)
{
	int i;
	int a = 1;
	int b = 2;

	for (i = 1; i <= 50; i++)
	{
		printf("%d, ", a);
		printf("%d, ", b);
		if ( i % 2 == 1)
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
		printf("\n");
	}

	return (0);
}
