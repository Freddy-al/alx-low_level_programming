#include "main.h"

/**
 * print_numbers - this prints the numbers from 0 to 9
 * Return: prints a new line
 */

void print_numbers(void)

{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
