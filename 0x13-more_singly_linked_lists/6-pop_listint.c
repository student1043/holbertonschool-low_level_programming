#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - check the code for Holberton School students.
 * @head: list
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
listint_t *temp, *holder;
temp = *head;
if (temp == NULL)
return (0);
if (temp != NULL)
{
holder = temp->next;
free(temp);
*head = holder;
}
return (temp->n);
}
