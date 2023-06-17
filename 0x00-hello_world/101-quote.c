#include <stdio.h>
/**
 * 
 * main - prints a statement
 *
 * Return: returns exactly 0
 */
int main(void)
{
	const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, message, sizeof(message) - 1);
	return (0);
}
