#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - check the code for Holberton School students.
 * @h: list
 * Return: Always 0.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
new_node = malloc(sizeof(listint_t));
if (n == '\0')
{
return (NULL);
}
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
if (new_node->n == '\0')
{
free(new_node);
return (NULL);
}
while (new_node->next)
new_node->next = *head;
*head = new_node;
return (new_node);
}
