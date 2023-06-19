#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: still 0
 */

int main(void)
{
	int m;

	for (m = 0; m < 10; m++)
	{
		putchar(m + '0');
	}
	char c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
