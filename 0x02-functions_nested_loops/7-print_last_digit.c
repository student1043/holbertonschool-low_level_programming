#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit - Entry point
 * @k: is the letter
 * Return: Always 0 (Success)
 */
int print_last_digit(int k)
{
k %= 10;
if (k < 0)
k = -k;
_putchar(k + '0');
return (k);
}
