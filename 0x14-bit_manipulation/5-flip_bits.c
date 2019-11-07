#include <stdio.h>
#include "holberton.h"
#include <string.h>
#include <stdlib.h>

/**
 * flip_bits - check the code for Holberton School students.
 * @n: first num
 * @m: second num
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int c, count = 0;
for (c = n ^ m; c != 0; c = c & (c - 1))
count++;
return (count);
}
