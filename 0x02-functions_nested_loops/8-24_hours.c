#include "holberton.h"
/**
 * jack_bauer - entry point
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
int i, k;
for (i = 0; i < 24; i++)
{
for (k = 0; k < 60; k++)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
_putchar(':');
_putchar(k / 10 + '0');
_putchar(k % 10 + '0');
_putchar('\n');
}
}
}
