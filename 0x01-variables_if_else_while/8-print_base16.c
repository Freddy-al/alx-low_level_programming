#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: still 0
 */

int main(void)
{
	int m;

	char c = 'a';

	for (m = 0; m < 10; m++)
	{
		putchar(m + '0');
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
