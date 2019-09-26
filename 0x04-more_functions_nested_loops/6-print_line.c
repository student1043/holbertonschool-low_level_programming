#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 * @n: is number of _
 * Return: Always 0.
 */
void print_line(int n)
{
int i;
for (i = 1; i <= n; i++)
{
_putchar('_');
if (i == n)
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
