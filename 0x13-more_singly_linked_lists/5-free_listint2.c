#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - check the code for Holberton School students.
 * @head: list
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
listint_t *c;
if (*head == NULL)
return;
while(*head)
{
c = (*head)->next;
free(*head);
*head = c;
}
}
