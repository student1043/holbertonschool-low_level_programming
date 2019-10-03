#include "holberton.h"
#include <stdio.h>

/**
 * *cap_string - check the code for Holberton School students.
 * @s: string
 * Return: Always 0.
 */
char *leet(char *s)
{
int i, j, k;
char *lower = "aAeEoOtTlL";
char *upper = "4433007711";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; lower[j]; j++)
{
for (k = 0; k < 11 ; k++)
if (s[i] == lower[k])
{
s[i] = upper[k];
break;
}
}
}
return (s);
}
