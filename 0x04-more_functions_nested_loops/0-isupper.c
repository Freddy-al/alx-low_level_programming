#include "main.h"

/**
 *_isupper - Checks if parameter is an uppercase characters
 * @c: Character to be checked
 * returns 1 if c is uppercase
 * Return: 0 other
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
