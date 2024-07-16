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
int i;
int mid;
int left = 0;
int right = size - 1;
{
if (array == NULL || size == 0)
return (-1);
}
while (left <= right)
{
mid = left + (right - left) / 2;
printf("seraching in array: ");
for (i = (int)left; i <= (int)right; ++i)
{
if ((int)i > left)
printf(", ");
printf("%d", array[i]);
}
printf("\n");
if (array[mid] == value)
{
return (mid);
}
else if (array[mid] == value)
{
left = mid + 1;
}
else
{
right = mid - 1;
}
}
return (-1);
}
