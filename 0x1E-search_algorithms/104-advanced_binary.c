#include "search_algos.h"

/**
 * advanced_recursive_binary - recursive
 * @array: array
 * @start: start
 * @end: end
 * @value: value
 * Return: index
 */
int advanced_recursive_binary(int *array, size_t start, size_t end, int value)
{
size_t middle;
size_t l;

if (end <= start)
return (-1);
printf("Searching in array: ");
for (l = start; l < end - 1; l++)
printf("%d, ", array[l]);
printf("%d\n", array[l]);
middle = (start + end) / 2;
if (value == array[middle] && array[middle - 1] != value)
return (middle);
else if (array[middle] > value)
return (advanced_recursive_binary(array, start, middle, value));
else if (array[middle] < value)
return (advanced_recursive_binary(array, middle + 1, end, value));
else
return (advanced_recursive_binary(array, start, middle, value));
return (-1);
}

/**
 * advanced_binary - advanced binary search
 * @array: array
 * @size: size
 * @value: value
 * Return: index
 */
int advanced_binary(int *array, size_t size, int value)
{
if (!array)
return (-1);
return (advanced_recursive_binary(array, 0, size, value));
}
