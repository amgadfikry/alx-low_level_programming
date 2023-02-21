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
	long int sum = 2;

	for (i = 1; i <= 48; i++)
	{
		if (i % 2 == 1)
		{
			a = a + b;
			if (a >= 4000000)
				break;
			else
			{
				if (a % 2 == 0)
					sum += a;
			}
		}
		else if (i % 2 == 0)
		{
			b = a + b;
			if (b >= 4000000)
				break;
			else
			{
				if (b % 2 == 0)
					sum += b;
			}
		}
	}
	printf("%ld\n", sum);

	return (0);
}
