#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - gives a pointer to a newly allocated space in memory
 *
 * @str: string to duplicate
 *
 * Return: ptr or NULL if str is equal to NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	int size;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
	{
	}
		ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
		ptr[size] = str[size];
	return (ptr);
}
