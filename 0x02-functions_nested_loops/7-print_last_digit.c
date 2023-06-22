#include "main.h"
/**
 * Main - 7-print_last_digit.c  prints the last digit of a number.
 *
 * Return: Returns the value of the last digit
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10
	if (l < 0)
	{
		_putchar(-l + 48);
		return(-l);
	}
	else
	{
	_putchar(l + 48);
	return (1);
}
