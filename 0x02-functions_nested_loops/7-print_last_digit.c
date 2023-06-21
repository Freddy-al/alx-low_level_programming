#include "main.h"
/**
 * Main - 7-print_last_digit.c  prints the last digit of a number.
 *
 * Return: Returns the value of the last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;

	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
