#include "holberton.h"
/**
 * print_diagonal - check the code for Holberton School students.
 * @n: is number of \
 * Return: Always 0
 */
void print_diagonal(int n)
{
int i;
int k;
for (i = 0; i < n; i++)
{
for (k = n - i; k < n; k++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}