#include <stdio.h>

/**
 * main - this prints size of various types
 *
 * Return: returns 0
 */

int main(void)
{
   
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu byte\n", sizeof(char));
 
    return 0;
}
