#include <stdio.h>
#include <unistd.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * free_list - writes the character c to stdout
 * @head: New List
 * Return: On success 1.
 */
void free_list(list_t *head)
{
list_t *temp;
while(head)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
}
