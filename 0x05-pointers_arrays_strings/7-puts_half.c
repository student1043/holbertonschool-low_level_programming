#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - check the code for Holberton School students.
 * @str: string
 * Return: Always 0.
 */
void puts_half(char *str)
{
int i;
int c = 0;
while (str[c] != '\0')
{
c++;
}
if (c % 2 == 0)
{
for (i = c / 2; i < c; i++)
_putchar(str[i]);
}
else
{

for (i = (c + 1) / 2; i < c; i++)
_putchar(str[i]);
}
_putchar('\n');
}
