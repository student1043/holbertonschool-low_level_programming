#include <stdio.h>
#include "holberton.h"
#include <string.h>
#include <stdlib.h>

/**
 * binary_to_uint - check the code for Holberton School students.
 * @b: is const char
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int k = 1;
unsigned int i = 0;
int c;
unsigned int len;
if (b == NULL)
return (0);
while (b[len] != '\0')
{
len++;
}
for (c = len - 1; c >= 0; c--)
{
if (b[c] != 48 && b[c] != 49)
return (0);
if (b[c] == '1')
{
i += k;
}
k *= 2;
}
return (i);
}
