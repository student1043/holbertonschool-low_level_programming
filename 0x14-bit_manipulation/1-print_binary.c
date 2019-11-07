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
int c;
unsigned int k;
for (c = 31; c >= 0; c--)
{
k = n >> c;
if (k & 1)
putchar('1');
else
putchar('0');
}
}
