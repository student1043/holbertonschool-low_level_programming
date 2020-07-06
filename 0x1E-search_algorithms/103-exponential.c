#include "search_algos.h"

/**
 * binary_search - searches for a value in array
 * @array: array
 * @size: size
 * @value: value
 * Return: index
 */
int binary_search(int *array, size_t size, int value)
{
size_t last = size;
size_t first = 0;
size_t middle;
size_t l;
int i;

if (!array)
return (-1);
while (first < last)
{
printf("Searching in array: ");
for (l = first; l < last - 1; l++)
printf("%d, ", array[l]);
printf("%d\n", array[l]);
middle = (first + last - 1) / 2;
i = array[middle];
if (value == i)
return (middle);
else if (i > value)
last = middle;
else if (i < value)
first = middle + 1;
}
return (-1);
}

/**
* exponential_search - Searches using exponential search.
* @array: A pointer to the first element of the array to search.
* @size: The size of the array.
* @value: The value to search for.
*
* Return: NULL, -1, the index where the value is located.
*/
int exponential_search(int *array, size_t size, int value)
{
size_t i = 0, right;

if (array == NULL)
return (-1);

if (array[0] != value)
{
for (i = 1; i < size && array[i] <= value; i = i * 2)
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
}

if (i < size)
right = i;
else
right = size - 1;
printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
return (binary_search(array, size, value));
}
