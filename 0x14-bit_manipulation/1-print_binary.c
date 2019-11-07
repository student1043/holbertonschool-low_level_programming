#include <stdio.h>
#include "holberton.h"
#include <string.h>
#include <stdlib.h>

/**
 * print_binary - check the code for Holberton School students.
 * @n: is const char
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
unsigned int i;
for (i = (1 << 31) ; i > 0; i = (i>>1))
if(n & i)
printf("1");
else
printf("0");
}
