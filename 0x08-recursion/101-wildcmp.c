#include "main.h"
/**
 * wildcmp - compare strings by recursion
 * @s1: string 1
 * @s2: string 2
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1)
		return (0);
	else if (*s2)
		return (1);
	return (0);
}
