#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - check the code for Holberton School students.
 * @a: integer
 * @size: integer
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
int i = 0, sum = 0, sum1 = 0;
for (i = 0; i < size; i++)
{
sum += a[i * size + i];
sum1 += a[(i * size) + (size - 1 - i)];
}
printf("%d, %d\n", sum, sum1);
}
