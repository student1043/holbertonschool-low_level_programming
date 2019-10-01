#include "holberton.h"
#include <stdio.h>

/**
 * _puts - check the code for Holberton School students.
 * @str: is string
 * Return: Always 0.
 */
void _puts(char *str)
{
fputs(str, stdout);
fputs("\n", stdout);
}
