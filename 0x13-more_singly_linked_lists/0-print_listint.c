#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - check the code for Holberton School students.
 * @h: list
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
size_t i;
i = 0;
while (h != NULL)
{
if (h->n == '\0')
{
h = h->next;
}
else
{
printf("%i\n", h->n);
h = h->next;
}
i++;
}
return (i);
}
