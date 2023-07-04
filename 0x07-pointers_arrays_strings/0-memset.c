#include "main.h"
/**
 *_memset - fills memory with a constant byte.
 *@s: pointer to n
 *@b: constant byte b
 *@n: number of bytes
 *Return: a pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}