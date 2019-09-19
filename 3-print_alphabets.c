#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * print message
 * Return: Always 0 (Success)
 */
int main(void){
char ch = 'a';
for (; ch <= 'z'; ch++)
{
putchar(ch);
}
char ch1 = 'A';
for (; ch1 <= 'Z'; ch1++)
{
putchar(ch1);
}
return (0);
}
