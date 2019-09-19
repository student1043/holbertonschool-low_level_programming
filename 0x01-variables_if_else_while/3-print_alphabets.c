#include <stdio.h>
/**
 * main - Entry point
 * putchar a-z
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch,ch1;

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch1 = 'A'; ch1 <= 'Z'; ch1++)
{
putchar(ch1);
}
putchar('\n');
return (0);
}
