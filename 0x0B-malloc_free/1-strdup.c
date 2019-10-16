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
unsigned int i;
copy = malloc(strlen(str) * sizeof(*str));
for (i = 0; i < strlen(str); i++)
{
if (str[i] != '\0')
{
copy[i] = str[i];
}
else
{
return (NULL);
}
}
return (copy);
}
