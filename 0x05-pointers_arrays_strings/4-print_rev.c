#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - check the code for Holberton School students.
 * @s: string
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i;
int c = 0;
while (s[c] != '\0')
{
c++;
}
for (i = c; i <= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
