#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the code for Holberton School students.
 * @b: integer
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
static int *ptr;
ptr = (int *)malloc(sizeof(int) * b);
if (ptr == NULL)
{
exit(98);
}
else
{
return (&*ptr);
}
}
