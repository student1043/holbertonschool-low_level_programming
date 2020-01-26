#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - check the code for Holberton School students.
 * @ht: hash table
 * @key: key
 * Return: Always EXIT_SUCCESS.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int ind;
hash_node_t *curr;

if (!ht)
return (NULL);

if (!key || strcmp(key, "") == 0)
return (NULL);

ind = key_index((unsigned char *) key, ht->size);
curr = ht->array[ind];
while (curr)
{
if (strcmp(curr->key, key) == 0)
return (curr->value);
}
return (NULL);
}
