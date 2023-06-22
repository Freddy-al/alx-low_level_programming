#include "main.h"
/**
 * Main - 5-sign.c prints the sign of a number
 *
 * Return: Retuns 1 and prints + if n is greater than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('43');
		return (1);
	}
       	else if (n < 0)
	{
		_putchar(45);
		return(-1);
	} 
	else 
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
