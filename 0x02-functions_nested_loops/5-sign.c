#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point
 * putchar a-z
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
_putchar(44);
_putchar(' ');
return (1);
}
else if (n == 0)
{
_putchar(48);
_putchar(44);
_putchar(' ');  
return (0);
else
return (-1);
}
