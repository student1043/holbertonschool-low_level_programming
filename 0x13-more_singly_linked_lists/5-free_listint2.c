#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - check the code for Holberton School students.
 * @head: list
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
listint_t *c;
while ((c = *head) != NULL)
{
*head = (*head)->next;
free(c);
}
head = NULL;
}
