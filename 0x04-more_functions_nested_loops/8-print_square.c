#include "holberton.h"

/**
 * print_square - check the code for Holberton School students.
 * @size: is number of #
 * Return: Always 0.
 */
void print_square(int size)
{
int k;
int i;
for (i = 1; i <= size; i++)
{
for (k = 1; k <= size; k++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
