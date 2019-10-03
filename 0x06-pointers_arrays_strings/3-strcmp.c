#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - check the code for Holberton School students.
 * @s1: string
 * @s2: string
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
int j = 0;
while (*(s1 + i) != '\0')
{
i++;
}
while (*(s2 + j) != '\0')
{
j++;
}
if (i - j < 0)
{
return (-15);
}
else if (i - j > 0)
{
return (15);
}
else
return (0);
}
