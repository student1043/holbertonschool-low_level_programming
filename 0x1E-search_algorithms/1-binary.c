#include "search_algos.h"

/**
 * binary_search -  function that searches for a value in a sorted array
 * @array: array
 * @size: size
 * @value: value
 * Return: the index of the value or -1
 */

int binary_search(int *array, size_t size, int value)
{
size_t middle, first = 0, last = size - 1, j = 0;

if (array == NULL)
return (-1);
while (first <= last)
{
printf("Searching in array: ");
for (j = first; j <= last; j++)
{
if (j < last)
    printf("%d, ", array[j]);
else
    printf("%d\n", array[j]);
}
middle = (last + first) / 2;
if (value == array[middle])
return (middle);
else if (value < array[middle])
last = middle - 1;
else if (value > array[middle])
first = middle + 1;
}
return (-1);
}
