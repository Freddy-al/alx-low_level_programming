#include <stdio.h>
/**
 * main - Using exceptions and putchar
 *
 * Return: still o
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if ((c != 'q' && c != 'e') && c <= 'z')
			putchar(c);
		c++;
	}	
	putchar('\n');
	return (0);
}
