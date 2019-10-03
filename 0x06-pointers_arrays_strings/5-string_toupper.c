#include "holberton.h"
#include <stdio.h>

/**
 * *string_toupper - check the code for Holberton School students.
 * @s: string
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
int i, j;
char *lower = "abcdefghijklmnopqrstuvwxyz";
char *upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 26 ; j++)
if (s[i] == lower[j])
{
s[i] = upper[j];
break;
}
}
return (s);
}
