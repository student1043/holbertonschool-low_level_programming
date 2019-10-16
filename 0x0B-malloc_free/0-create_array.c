#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - create an array of size c
 * @c: the character to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;
ptr = malloc(size * sizeof(char));
if (size == 0)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
ptr[size] = '\0';
return (ptr);
}
