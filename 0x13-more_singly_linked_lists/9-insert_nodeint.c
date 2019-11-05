#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - check the code for Holberton School students.
 * @head: list
 * @idx: the index
 * @n: integer
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *temp, *prev;
temp = malloc(sizeof(listint_t));
if (head == NULL)
return (NULL);
temp = *head;
for (i = 1; i < idx; i++)
{
temp = temp->next;
if (temp == NULL)
return (NULL);
}
prev = malloc(sizeof(listint_t));
if (prev == NULL)
return (NULL);
prev->n = n;
if (!idx)
{
prev->next = *head;
*head = prev;
return (prev);
}
prev->next = temp->next;
temp->next = prev;
return (prev);
}
