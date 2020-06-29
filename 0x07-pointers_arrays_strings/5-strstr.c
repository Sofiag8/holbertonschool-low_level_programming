#include "holberton.h"
/**
 * _strstr - ffind the first occurrence
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: a pointer to needle or NULL if no byte is found
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + 1] == haystack[b + 1])
				return (&(needle[b]));
		}
	}
	return (0);
}
