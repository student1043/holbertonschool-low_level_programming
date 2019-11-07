#include <stdio.h>
#include "holberton.h"
#include <string.h>
#include <stdlib.h>

/**
 * get_bit - check the code for Holberton School students.
 * @n: is the integer
 * @index: is index of the given bit
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i;
if (index > 31)
return (-1);
i = (n >> index) & 1;
return (i);
}
