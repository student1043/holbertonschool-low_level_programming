#include <stdio.h>
#include <unistd.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * print_list - writes the character c to stdout
 * @head: New List
 * str: string
 * Return: On success 1.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
head = malloc(sizeof(list_t));
new_node = malloc(sizeof(list_t));
if (head)
{
new_node->str = strdup(str);
new_node->next = *head;
*head = new_node;
}
else
return (NULL);
return (*head);
}
