#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
int i;
int *ptr;
if (min > max)
return (NULL);
ptr = (int *)malloc(sizeof(int) * (max + 1));
if (ptr == NULL)
return (NULL);
for (i = 0;i <= max; i++)
ptr[i] = i;
return (ptr);
}
