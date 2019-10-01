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
int j;
while (str[j] != '\0')
{
j++;
}
while (j != i)
{
for (i = 0; i < j - 1; i += 2)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
