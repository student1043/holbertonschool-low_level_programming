#include "holberton.h"
#include <stdio.h>

/**
 * is_palindrome - check the code for Holberton School students.
 * @s: string
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
if (*s)
{
return (pali(*s, 0, 0));
}
return (0);
}
/**
 * pali - check the code for Holberton School students.
 * @s: string
 * Return: Always 0.
 */

int pali(char *d, int i, int length)
{
if (d[i] != '\0')
i++;
if (i == 0)
return (1);
length = i;
if (d[i] == d[i] + (length - 1));
else
{
return (0);
}
return (0);
}