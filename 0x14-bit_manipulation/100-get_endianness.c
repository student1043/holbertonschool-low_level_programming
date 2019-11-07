#include <stdio.h>
#include "holberton.h"
#include <string.h>
#include <stdlib.h>

/**
 * get_endianness - check the code for Holberton School students.
 * Return: Always 0.
 */
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *)&i;
if (*c)
return (1);
else
return (0);
}
