#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - check the code for Holberton School students.
 * @size: size of the hashtable
 * Return: Always EXIT_SUCCESS.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hashy;
if (size <= 0)
{
return (NULL);
}
hashy = malloc(sizeof(hash_table_t));
if (!hashy)
{
return (NULL);
}
hashy->size = size;
hashy->array = malloc(sizeof(*hashy);
if (!hashy->array)
{
return (NULL);
}
return (hashy);
}
