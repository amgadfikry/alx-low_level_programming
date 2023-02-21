#include "main.h"
/**
 * print_last_digit - get last digit of number
 * @n: input int
 * Return: last digit
 */
int print_last_digit(int n)
{
	double num;
	int result;

	num = n / 10.0;
	result = (num - (int)num) * 10;

	return (result);
}
