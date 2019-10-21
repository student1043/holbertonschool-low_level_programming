#include <stdio.h>
#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * @argv: the string
 * @argc: integer
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i;
int j;
(void) argc;
(void) *argv;
while (__FILE__[i] != '\0')
i++;
for (j = 0; j < i; j++)
putchar(__FILE__[j]);
putchar('\n');
return (0);
}
