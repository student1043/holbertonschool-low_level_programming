#include "holberton.h"
/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int i;
int k;
for (i = 0; i < 10; i++)
{
for (k = 0; k < 15; k++)
{
if (k > 9)
{
_putchar(k / 10 + '0');
}
_putchar(k % 10 + '0');
}
_putchar('\n');
}
}
