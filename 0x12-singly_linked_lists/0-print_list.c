#include <stdio.h>
#include <unistd.h>
#include "lists.h"
/**
 * print_list - writes the character c to stdout
 * @h: New List
 * Return: On success 1.
 */
size_t print_list(const list_t *h)
{
size_t i;
i = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
h = h->next;
}
else
{
printf("[%i] %s\n", h->len, h->str);
h = h->next;
}
i++;
}
return (i);
}
