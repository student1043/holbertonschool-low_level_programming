#include <stdio.h>
#include "holberton.h"

/**
 * main - writes the character c to stdout
 * @argv: The character to print
 * @argc: integer
 * Return: On success 1.
 */

int main(int argc, char *argv[])
{
int i;
(void) argc;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (1);
}
