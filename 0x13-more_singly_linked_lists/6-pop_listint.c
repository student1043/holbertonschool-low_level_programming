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
int i;
listint_t *temp;
if (*head == NULL)
return (0);

i = (*head)->n;
temp = *head;
*head = (*head)->next;
free(temp);

return (i);
}
