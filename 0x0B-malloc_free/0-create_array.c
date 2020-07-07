#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an arrays of chars
 *
 * @size: the size of the memory
 * @c: specific char to initialize
 *
 * Return: NULL if the size is cero, or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *ar;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
		ar[n] = c;
		return (ar);
}
