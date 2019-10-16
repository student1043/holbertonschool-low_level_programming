#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup - check the code for Holberton School students.
 * @str: string
 * Return: Always 0.
 */
char *_strdup(char *str)
{
char *copy;
char *p;
unsigned int i = 0;
if (str == NULL)
{
return (NULL);
}
else
{
while (str[i])
str++;
copy = malloc(i + 1);
p = copy;
while (*str)
*p++ = *str++;
p[i] = '\0';
}
return (str);
}
