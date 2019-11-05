#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - check the code for Holberton School students.
 * @h: list
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
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
h = h->next;
}
i++;
}
return (i);
}
