#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * main - writes the character c to stdout
 * @argv: The character to print
 * @argc: integer
 * Return: On success 1.
 */

int main(int argc, char *argv[])
{
int a;
int i;
int result;
(void) argc;
if (argv[0] && argv[1])
{
a = atoi(argv[1]);
i = atoi(argv[2]);
result = a *i;
printf("%i\n", result);
}
else
{
printf("Error\n");
}
return (0);
}
