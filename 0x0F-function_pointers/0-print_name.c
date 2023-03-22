#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function that print name
 * @name: input string
 * @f: pointer to function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
