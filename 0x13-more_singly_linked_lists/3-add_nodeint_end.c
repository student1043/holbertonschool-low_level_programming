#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - check the code for Holberton School students.
 * @head: list
 * @n: constant
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *temp;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
temp = *head;
while (temp->next)
temp = temp->next;
temp->next = new_node;
return (new_node);
}
