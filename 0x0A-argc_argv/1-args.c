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
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
