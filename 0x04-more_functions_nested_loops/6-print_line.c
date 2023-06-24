#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * putchar only
 * @n: is the number of times the character '_' is printed.
 * Return: return \n if n is 0 or less
 */

void print_line(int n)

{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
