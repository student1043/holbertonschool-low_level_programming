#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - check the code for Holberton School students.
 * @head: list
 * @index: index of the node
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *temp;
temp = head;
if (temp == NULL)
return (NULL);
for (i = 0; i < index; i++)
{
temp = temp->next;
}
return (temp);
}
