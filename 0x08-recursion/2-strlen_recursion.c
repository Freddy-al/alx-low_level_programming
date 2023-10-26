#include "main.h"

/**
 * _strlen_recursion - Calculate the legnth of a string
 * @s: the string
 *
 * Return: integer value
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursions(s) + 1);
}