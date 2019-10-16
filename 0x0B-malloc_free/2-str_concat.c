#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - check the code for Holberton School students.
 * @s1: string
 * @s2: string
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
int len1,len2,lentot,i=0;
char *a;
len1 = strlen(s1);
len2 = strlen(s2);
lentot = len1+len2+1;
a = malloc(lentot);
for (i = 0; i < len1; i++)
{
a[i] = s1[i];
}
for (i = 0; i < len2; i++)
{
a[i + len1] = s2[i];
}
a[lentot] = '\0';
return(a);
if (len1 == NULL || len2 == NULL)
return(NULL);
}