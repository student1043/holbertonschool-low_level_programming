#include "holberton.h"
/**
 * print_triangle - check the code for Holberton School students.
 * @size: variable
 * Return: Always 0.
 */
void print_triangle(int size)
{
int i, k;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (k = 0; k < size; k++)
{
if (k < size - i - 1)
{
_putchar(' ');
}
else
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
