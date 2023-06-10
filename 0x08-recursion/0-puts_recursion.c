#include "main.h"
/**
 * _puts_recursion - print string follow with new line use recursion
 * @s: input string
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
