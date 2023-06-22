#include "main.h"
/**
 * Main - 4-isalpha.c checks for alphabetic cha
 *
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
	_putcher('\n');
}
