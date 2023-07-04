#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: memory area
 * @src: memory area
 * @n: bytes to be copied
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
