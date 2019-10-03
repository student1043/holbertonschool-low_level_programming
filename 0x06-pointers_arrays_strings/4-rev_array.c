#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - check the code for Holberton School students.
 * @n: the number of elements to swap
 * @a: integer
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i;
int aux;
int m;
if (n % 2 != 0)
m = n + 1;
else
m = n;
for (i = 0; i < m / 2; i++)
{
aux = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = aux;
}
}
