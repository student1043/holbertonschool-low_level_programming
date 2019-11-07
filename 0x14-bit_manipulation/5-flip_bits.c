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
unsigned long int a = 1;
unsigned long int b;
unsigned long int c;
unsigned int i = 0;
unsigned int j = 0;
b = n ^ m;
c = (sizeof(unsigned long int) * 8);
while (i < c)
{
if (a == (b & a))
j++;
a <<= 1;
i++;
}
return (j);
}
