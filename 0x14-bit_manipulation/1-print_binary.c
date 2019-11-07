#include <stdio.h>
#include "holberton.h"
#include <string.h>
#include <stdlib.h>

/**
 * print_binary - check the code for Holberton School students.
 * @n: is const char
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);
printf("%ld", n & 1);
}
