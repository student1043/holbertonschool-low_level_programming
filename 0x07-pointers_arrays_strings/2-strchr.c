#include "holberton.h"
#include <stdio.h>
/**
 * *_strchr - check the code for Holberton School students.
 * @s: char
 * @c: char
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
for (; *s != '\0'; s++)
if (*s == c)
return (s);
return (NULL);
}
