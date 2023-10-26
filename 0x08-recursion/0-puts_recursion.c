#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: This is a string
 *
 * Return: void
 */

void_puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
