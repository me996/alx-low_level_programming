#include "search_algos.h"

/**
 * linear_search - Search for a value in an array.
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for in the array.
 *
 * Return: The index of the first occurrence of value in array,
 * or -1 if value is not present or if array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
unsigned int i;

if (array == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}
