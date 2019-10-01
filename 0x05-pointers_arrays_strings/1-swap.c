#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - check the code for Holberton School students.
 * @a: first integer
 * @b: second integer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
