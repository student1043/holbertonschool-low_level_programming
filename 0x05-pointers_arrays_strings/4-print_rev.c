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
int c = 0;
while (s[c] != '\0')
{
c++;
}
for (i = c; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
