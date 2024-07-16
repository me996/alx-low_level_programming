#include "search_algos.h"
/**
 * binary_search - Search for a value in an array.
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for in the array.
 *
 * Return: The index of the first occurrence of value in array,
 * or -1 if value is not present or if array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
size_t i, left, right;

if (!array)
return (-1);

for (left = 0, right = size - 1; right >= left;)
{
printf("Searching in array: ");
for (i = left; i < right; i++)
printf("%d, ", array[i]);

printf("%d\n", array[i]);

i = left + (right - left) / 2;
if (array[i] == value)
return (i);

if (array[i] > value)
right = i - 1;
else
left = i + 1;
}

return (-1);
}
