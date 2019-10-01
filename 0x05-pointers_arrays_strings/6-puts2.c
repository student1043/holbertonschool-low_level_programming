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
for (i = 0; i < c - 1; i++)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
