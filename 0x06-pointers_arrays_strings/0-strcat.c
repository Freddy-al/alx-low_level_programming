#include "main.h"

/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int length, z;

	length = 0;
	while (dest[length] != '\0')
	{
		legnth++;
	}
	for (z = 0; src[z] != '\0'; z++, length++)
	{
		dest[length = src[z];
	}
	dest[legnth] = '\0';
	return (dest);
}
