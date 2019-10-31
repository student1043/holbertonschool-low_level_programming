#include <stdio.h>
#include <unistd.h>
#include "lists.h"
/**
 * list_len - writes the character c to stdout
 * @h: New List
 * Return: On success 1.
 */
size_t list_len(const list_t *h)
{
size_t i;
i = 0;
while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
