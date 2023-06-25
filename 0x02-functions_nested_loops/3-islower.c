#include "main.h"
/**
 * _islower - writes a program that prints a lowercase character
 * @c: the character to be checked
 * Return: 1 for lowercase or 0 if not.
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
