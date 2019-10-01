#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - check the code for Holberton School students.
 * @s: string
 * Return: Always 0.
 */
void rev_string(char *s)
{
char *first, *last, temp;
int i;
int c = 0;
first = s;
last = s;
while (s[c] != '\0')
{
c++;
}
for (i = 0; i < c - 1; i++)
last++;
for (i = 0; i < c / 2; i++)
{
temp = *last;
*last = *first;
*first = temp;
first++;
last--;
}
}
