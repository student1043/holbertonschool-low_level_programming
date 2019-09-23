#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point
 * putchar a-z
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char c;
int j = 0;
while (j < 10)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
j++;
_putchar('\n');
}
}
