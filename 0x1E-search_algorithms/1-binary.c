#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
size_t i;
int k;
int low = array[0];
int high = array[0];
for (i = 0; i < size - 1; i++)
{
if (array[i] > high)
{
high = array[i];
}
}
for (i = 0; i < size - 1; i++)
{
if (array[i] < low)
{
low = array[i];
}
}
printf("Searching in array: ");
for (k = low; k <= high; k++)
{
if (k == high)
{
printf("%d\n", array[i]);
break;
}
printf("%d, ", array[i]);
}
while (low <= high)
{
int mid = low + (high - low) / 2;

if (array[mid] == value)
{
return mid;
}
if (array[mid] < value)
{
low = mid + 1;
}
else
{
high = mid - 1;
}
}
return (-1);
}

