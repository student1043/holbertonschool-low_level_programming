#include <stdio.h>
#include "holberton.h"
#include <string.h>
#include <stdlib.h>

/**
 * clear_bit - check the code for Holberton School students.
 * @n: is the integer
 * @index: is index of the given bit
 * Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 31)
return (-1);
*n &= ~(1UL << index);
return (1);
}
