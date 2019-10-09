#include "holberton.h"
#include <stdio.h>

/**
* is_prime_number - fills memory with a constant byte.
* @n: the memory area to print in
* Return: void.
*/

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime(n, n / 2));
}

/**
* prime - fills memory with a constant byte.
* @num: the memory area to print in
* @i: the memory area to print in
* Return: int
*/

int prime(int num, int i)
{
if (num % i == 0)
return (0);
else
prime(num, i - 1);
return (1);
}
