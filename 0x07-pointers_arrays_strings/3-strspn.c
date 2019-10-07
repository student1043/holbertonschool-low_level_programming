#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - check the code for Holberton School students.
 * @s: character
 * @accept: character
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
int ret=0;
while(*s && strchr(accept,*s++))
ret++;
return (ret);  
}
