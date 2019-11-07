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
unsigned long int max_len = n;
if (n == 0)
_putchar('0');
while (max_len > 0)
{
if ((n & max_len) == 0)
_putchar('0');
else
_putchar('1');
max_len = max_len >> 1;
}
}
