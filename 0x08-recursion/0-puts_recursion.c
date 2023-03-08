#include "main.h"
/**
 * _puts_recursion - print string follow with new line
 * @s: input string
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	_puts_recursion(char *(s + 1));
}
