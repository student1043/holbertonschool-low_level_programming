#include <stdio.h>
#include <unistd.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * beforemain - writes the character c to stdout
 * 
 * Return: On success 1.
 */
void __attribute__ ((constructor)) Beforemain()
{
printf("You're beat! and yet, you must allow");
printf(",\nI bore my house upon my back!\n");
}
