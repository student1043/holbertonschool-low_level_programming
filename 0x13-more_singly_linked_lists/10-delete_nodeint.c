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
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *temp;
if (head == NULL || *head == NULL)
return (-1);
temp = *head;
if (index == 0)
{
temp = (*head)->next;
free(*head);
*head = temp;
return (1);
}
for (i = 0; i < index; i++)
{
temp = temp->next;
}
free(temp);
return (1);
}