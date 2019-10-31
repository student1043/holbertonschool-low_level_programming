#include <stdio.h>
#include <unistd.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * *add_node_end - writes the character c to stdout
 * @head: New List
 * @str: string
 * Return: On success 1.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;
unsigned int length;
new_node = malloc(sizeof(list_t));
if (str == NULL)
{
return (NULL);
}
if (new_node == NULL)
{
return (NULL);
}
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
for (length = 0; new_node->str[length]; length++)
new_node->len = length + 1; 
new_node->next = NULL;
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
