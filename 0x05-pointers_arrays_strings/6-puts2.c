#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - check the code for Holberton School students.
 * @str: is string
 * Return: Always 0.
 */
void puts2(char *str)
{
int i;
int c;
while (str[c] != '\0')
{
c++;
}
while (c != i)
{
for (i = 0; i < c - 1; i += 2)
_putchar(str[i]);
}
_putchar('\n');
}
