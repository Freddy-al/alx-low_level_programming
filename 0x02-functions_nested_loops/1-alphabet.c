#include "main.h"
/**
 * print_alphabet - prints all alphabet in lowercase followed by a new line
 * Return: returns a new line
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

