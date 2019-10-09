#include "holberton.h"
#include <stdio.h>

/**
 * factorial - check the code for Holberton School students.
 * @n: integer
 * Return: Always 0.
 */
int factorial(int n)
{
if (n >= 1)
{
return (n * factorial(n - 1));
}
else if (n < 0)
{
return (-1);
}
else
{
return (1);
}
}
