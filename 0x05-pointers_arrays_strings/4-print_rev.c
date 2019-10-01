#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i;
for (i = 0; i <= _strlen(*s); i++);
{
_putchar(s[_strlen(*s)] - i);
}
_putchar('\n');
}