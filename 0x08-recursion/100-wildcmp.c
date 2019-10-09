#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _strlen(char *s1, char*s2)
{
if (*s1 == '\0')
return (0);
if (*s2 == '\0' || *s2 == '*')
return (0);
else
return (1 + _strlen(s1 + 1, s2 + 1));
}
/**
* comparator - compares each character of the string.
* @s: string
* @n1: smallest iterator.
* @n2: biggest iterator.
* Return: .
*/
int comparator1(char *s1, char *s2, int n1, int n2)
{
if (*(s1 + n1) == *(s2 + n2))
{
if (n1 == n2 || n1 == n2 + 1)
return (1);
return (0 + comparator1(s1, s2, n1 + 1, n2 + 1));
}
return (0);
}
/**
* is_palindrome - detects if a string is a palindrome.
* @s: string.
* Return: 1 if s is a palindrome, 0 if not.
*/
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
return (comparator1(s1, s2, 0, _strlen(s1, s2) - 1));
}