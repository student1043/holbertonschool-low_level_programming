#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit - Entry point
 * @k: is the letter
 * Return: Always 0 (Success)
 */
int print_last_digit(int k)
{
int d;
int b = -1;
if (k > 0)
{
d = k % 10;
_putchar(d + '0');
}
else if (k < 0)
{
k = k *b;
d = k % 10;
_putchar(d + '0');
}
else
_putchar(0 + '0');
return (d);
}

