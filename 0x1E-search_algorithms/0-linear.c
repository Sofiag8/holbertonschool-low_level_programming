#include "search_algos.h"
/**
 * linear_search -  function that searches for a value in an array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: -1 if value is not present or array is NULL, otherwise the index
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;
	char msg[] = "Value checked array";

	if (array)
	{
		for (idx = 0; idx < size; idx++)
		{
			printf("%s[%ld] = [%d]\n", msg, idx, array[idx]);
			if (value == array[idx])
				return (idx);
		}
	}
	return (-1);
}
