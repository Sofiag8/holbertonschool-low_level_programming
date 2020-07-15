#include "function_pointers.h"
/**
 * array_iterator - executes a functionas parameter of each element of an array
 *
 * @array: pointer to an int
 * @size: variable type size_t
 * @action: pointer to a function that receives an int
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int elements;
	/* run through the array to know which are the elements */
	/* we already know the size of the array */
	/* elements runs while it is less than the size ofc. */
	for (elements = 0; elements < size; elements++)
	{
		action(array[elements]);
	}
	/* so de-reference the pointer to the function */
	/* to the elements of the array */
}
