#include "main.h"
/**
* Main -  print_alphabet  prints all alphabet in lowercase
*
* Return: Always Zero
*/
void print_alphabet(void)
{
	int i; 

	for (i = 97; i <= 122; i++) 
	{
		_putchar(i);
	}
	_putchar('\n');
}

