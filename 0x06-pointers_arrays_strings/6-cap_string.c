#include "holberton.h"
#include <stdio.h>

/**
 * *cap_string - check the code for Holberton School students.
 * @s: string
 * Return: Always 0.
 */
char *cap_string(char *s)
{
int i, j, k;
char *lower = "abcdefghijklmnopqrstuvwxyz";
char *upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char separators[] = {',', ';', ' ', '.', '!', '?', '"', '(', ')',
'{', '}', '\t', '\n' };
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; separators[j]; j++)
{
if (s[i - 1] == separators[j])
{
for (k = 0; k < 26 ; k++)
if (s[i] == lower[k])
{
s[i] = upper[k];
break;
}
}
}
}
return (s);
}
