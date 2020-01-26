#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - check the code for Holberton School students.
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
int trip = 0;
unsigned long int my_index;
hash_node_t *node;
hash_node_t *curr;

if ((!key || !value) || (!key[0] || !ht) || (!ht->array))
return (0);
node = malloc(sizeof(hash_node_t *));
if(!node)
return (0);
node->key = strdup(key);
node->value = strdup(value);
node->next = NULL;
my_index = key_index((const unsigned char *) key, ht->size);
curr = ht->array[my_index];
while (curr)
{
if (strcmp(curr->key, key) == 0)
{
free(node->key);
free(node->value);
free(node);
free(curr->value);
curr->value = strdup(value);
trip = 1;
return (1);
}
curr = curr->next;
}
if (trip == 0)
{
if (ht->array[my_index])
node->next = ht->array[my_index];

ht->array[my_index] = node;
}
return (1);
}
