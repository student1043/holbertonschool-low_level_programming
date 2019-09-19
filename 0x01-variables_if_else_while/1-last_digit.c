#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * putchar a-z
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, ln;

srand(time(0));
n = rand() - RAND_MAX / 2;
ln = n % 10;

printf("Last digit of %d is %d ", n, ln);
if (ln > 5)
{
printf("and is greater than 5\n");
}
else if (ln == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0");
}
return (0);
}
