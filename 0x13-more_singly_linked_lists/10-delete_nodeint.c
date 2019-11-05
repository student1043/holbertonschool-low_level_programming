#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - check the code for Holberton School students.
 * @head: list
 * @index: the index
 * Return: Always 0.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *temp, *elm;
if (head == NULL || *head == NULL)
return (-1);
elm = *head;
if (index == 0)
{
elm = (*head)->next;
free(*head);
*head = elm;
return (1);
}
for (i = 0; i < index && elm; i++)
{
temp = elm;
elm = elm->next;
}
if (elm)
{
temp->next = elm->next;
free(elm);
return (1);
}
return (-1);
}
