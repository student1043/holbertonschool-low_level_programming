#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - check the code for Holberton School students.
 * @s1: char
 * @s2: char
 * @n: integer
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

unsigned int size = 0;
unsigned int size2 = 0;
unsigned int i = 0;
char *r;

if (s1 != NULL)
{
while (s1[size] != '\0')
size++;
}

if (s2 != NULL)
{
while (s2[size2] != '\0')
size2++;
}

r = malloc(sizeof(char) * (size + size2 + 1));
if (r == NULL)
return (NULL);

for (i = 0; i < size; i++)
r[i] = s1[i];

for (i = 0; i < n; i++)
r[i + size] = s2[i];
r[size + size2] = '\0';

return (r);
}
