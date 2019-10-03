#include "holberton.h"
#include <stdio.h>

/**
 * *_strncat - check the code for Holberton School students.
 * @dest: destination
 * @src: source
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
char *dest1 = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0') 
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (dest1);
}