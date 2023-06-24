#include <stdio.h>
#include "main.h"

/**
 * main - prints numbers from 1 to 100
 * Description: a program that prints the numbers from 1 to 100
 * fizz is multiples of 3 and buzz is multiples of 5.
 * fizzbuzz for multiples of both
 * Return: 0
 */

int main(void)

{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
