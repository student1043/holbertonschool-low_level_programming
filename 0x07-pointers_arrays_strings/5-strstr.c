#include "holberton.h"
#include <stdio.h>
/**
 * *_strstr - check the code for Holberton School students.
 * @haystack: the string
 * @needle: the word in the string
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j;
for (i = 0; needle[i] != '\0'; i++)
{
for (j = 0; haystack[j] != '\0'; j++)
{
if (needle[i] == haystack[j])
return (needle);
}
}
return (0);
}
