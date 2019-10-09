#include "holberton.h"
#include <stdio.h>

/**
 * _pow_recursion - check the code for Holberton School students.
 * @x: this is the number that we are going to raise y times
 * @y: this is the power of x
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
if (y >= 1)
{
return (x = x * _pow_recursion(x, y - 1));
}
else if (y < 0)
{
return (-1);
}
else
{
return (1);
}
}
