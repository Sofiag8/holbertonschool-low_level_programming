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
	size_t search;
	int index = -1, idx = -1;

	if (array == NULL)
		return (-1);

	for (search = 0; search < size; search++)
	{
		idx++;
		printf("Value checked array[%d] = [%d]\n", idx, array[search]);
		if (value == array[search])
		{
			index = search;
			break;
		}
	}
	return (index);
}
