#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - entry point
 * @n: number to check
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
int k;
if (n == 98)
{
printf("98\n");
}
else if (n < 98)
{
for (k = n; k < 98; k++)
printf("%d, ", k);
printf("98\n");
}
else
{
for (k = n; k > 98; k--)
printf("%d, ", k);
printf("98\n");
}
}


