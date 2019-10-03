#include "holberton.h"
#include <stdio.h>

/**
 * *rot13 - check the code for Holberton School students.
 * @s: string
 * Return: Always 0.
 */
char *rot13(char *s)
{
int i, j;
char *lower = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *upper = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 53; j++)
if (s[i] == lower[j])
{
s[i] = upper[j];
break;
}
}
return (s);
}
