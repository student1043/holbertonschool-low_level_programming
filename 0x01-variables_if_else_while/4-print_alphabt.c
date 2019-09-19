#include <stdio.h>
/**
 * main - Entry point
 * putchar a-z
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch != 'z'; ch++)
{
if (ch == 'e')
{
ch = ch + 1;
}
if (ch == 'q')
{
ch = ch + 1;
}
putchar(ch);
}
putchar('\n');
return (0);
}
