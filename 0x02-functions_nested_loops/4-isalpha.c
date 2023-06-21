#include "main.h"
/**
 * Main - 4-isalpha.c checks for alphabetic cha
 *
 * Return: Always 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
